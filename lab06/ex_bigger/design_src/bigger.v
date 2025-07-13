module bigger (
    input [3:0] a, // three random non-negative integer
    input [3:0] b,
    input [3:0] c,
    output reg bgt, // be 1 if a > b
    output reg seq_bgt  // be 1 if a > b > c
);
    always @(*) begin
        bgt      = (a > b);
        seq_bgt  = (a > b) && (b > c); // chained compare
    end
endmodule
