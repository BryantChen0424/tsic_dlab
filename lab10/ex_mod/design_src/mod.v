module mod (
    input clk,
    input rst_n,
    input valid, // indicates the input data is valid at this cycle
    input [7:0] dividend,
    input [7:0] divisor,
    output reg ready, // one cycle pulse to indicate the output data is ready.
    output reg [7:0] remainder
);
    localparam IDLE = 0,
               BUSY = 1,
               OUT  = 2;
    
    reg [1:0] S, S_nxt;
    reg [7:0] a, a_nxt;
    reg [7:0] b, b_nxt;

    always @(*) begin
        case (S)
            IDLE: begin
                if (valid) begin // store the input data, because it is a valid.
                    a_nxt = dividend;
                    b_nxt = divisor;
                    S_nxt = BUSY;
                end
                else begin // hold the current value in registers
                    a_nxt = a;
                    b_nxt = b;
                    S_nxt = IDLE;
                end
            end
            BUSY: begin
                if (a < b) begin // a is the remainder now
                    a_nxt = a;
                    b_nxt = b;
                    S_nxt = OUT;
                end
                else begin // a keep minus b
                    a_nxt = a - b;
                    b_nxt = b;
                    S_nxt = BUSY;
                end
            end
            OUT: begin // go to IDLE directly because this cycle is the ready pulse.
                a_nxt = a;
                b_nxt = b;
                S_nxt = IDLE;
            end
            default: begin
                a_nxt = 0;
                b_nxt = 0;
                S_nxt = IDLE;
            end
        endcase
    end

    always @(posedge clk, negedge rst_n) begin
        if (~rst_n) begin
            S <= IDLE;
            a <= 0;
            b <= 0;
        end
        else begin
            S <= S_nxt;
            a <= a_nxt;
            b <= b_nxt;
        end
    end

    always @(*) begin
        // assign the correct data when the ready pulse is actived
        ready = S == OUT;
        remainder = S == OUT ? a : 0;
    end
endmodule
