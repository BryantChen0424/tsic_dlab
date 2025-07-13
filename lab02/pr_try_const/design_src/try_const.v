module try_const (
    output reg [15:0] o16
);

    always @(*) begin
        o16 = 8'd0; // modify this, try to output various values.
    end

endmodule
