module relu (
    input  [7:0] a,
    output reg [7:0] relu_a // if a < 0, assign '0' to relu_a, otherwise, assign a to relu_a
);
    always @(*) begin
        relu_a = a < 0 ? 0 : a;
    end
endmodule
