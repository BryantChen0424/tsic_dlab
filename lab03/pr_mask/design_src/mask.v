module mask (
    input  [7:0] a,
    output reg [7:0] o
);
    always @(*) begin
        o = a & // hint: try a & <a_binary_const>
    end
endmodule
