module divmod (
    input            clk,
    input            rst_n,
    input            valid,
    input      [7:0] dividend,
    input      [7:0] divisor,
    output reg       ready,
    output reg [7:0] quotient,
    output reg [7:0] remainder
);
    localparam IDLE = 0, /* state code define */
               BUSY = 1,
               OUT  = 2;
    
    reg [1:0] S, S_nxt; /* state register */
     /* other registers */
    
    

    always @(*) begin
        case (S)
            IDLE: begin
                /* In state "IDLE", for the ??_nxt, what expression should be assigned to them? */
            end
            BUSY: begin
                /* In state "BUSY", for the ??_nxt, what expression should be assigned to them? */
            end
            OUT: begin
                /* In state "OUT", for the ??_nxt, what expression should be assigned to them? */
            end
            default: begin

            end
        endcase
    end

    always @(posedge clk, negedge rst_n) begin
        if (~rst_n) begin
            /* assign the initial state to S, a, b, q */
        end
        else begin
            /* assign the ??_nxt to S, a, b, q */
        end
    end

    always @(*) begin
        /* output signals assignment */
    end
endmodule
