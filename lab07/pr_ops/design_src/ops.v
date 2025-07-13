module ops (
    input  [7:0] a,
    input  [7:0] b,
    input  [1:0] op,
    output reg [7:0] o
);

    always @(*) begin
        case (op)
            2'b00: begin // op == 0, o = a + b
                o = //
            end
            2'b01: begin // op == 0, o = a % b
                o = //
            end
            2'b10: begin // op == 0, o = a & b
                o = //
            end
            2'b11: begin // op == 0, o = a | b
                o = //
            end
            default: o = 8'h00;
        endcase
    end
endmodule
