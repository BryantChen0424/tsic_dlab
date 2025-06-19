module xornot (
    input a,
    input b,
    output reg o_xor,
    output reg a_not,
    output reg b_not
);

    always @(*) begin
        o_xor  = a ^ b;
        a_not  = ~a;
        b_not  = ~b;
    end

endmodule
