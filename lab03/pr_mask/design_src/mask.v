module mask (
    input  [7:0] a,
    output reg [7:0] o // for o[7~4], assign zero
                       // for o[3~0], assign a[3~0] separately
);
    always @(*) begin
        o = a & // hint: try a & <a_binary_const>
    end
endmodule
