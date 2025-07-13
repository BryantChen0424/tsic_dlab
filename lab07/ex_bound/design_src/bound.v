module bound (
    input  [7:0] a,
    output reg [7:0] bound_a
);
    always @(*) begin
        bound_a = a > 63 ? 63 : a;
    end
endmodule
