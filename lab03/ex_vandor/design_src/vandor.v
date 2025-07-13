module vandor (
    input  [3:0] a,
    input  [3:0] b,
    output reg [3:0] and_ab,
    // for the vector index in 3, 2, 1, 0 separately
    // and_ab[3] = a[3] & b[3]
    // and_ab[2] = a[2] & b[2]
    // and_ab[1] = a[1] & b[1]
    // and_ab[0] = a[0] & b[0]
    output reg [3:0] or_ab,
    output reg and_a,
    output reg or_a
);
    always @(*) begin
        and_ab = a & b;
        or_ab  = a | b;
        and_a  = a[3] & a[2] & a[1] & a[0]; // reduction AND, equal to "&a"
        or_a   = |a;                        // Reduction OR
    end
endmodule
