module andor (
    input a,
    input b,
    output reg o_and, // = a and b
    output reg o_or   // = a or b
);

    always @(*) begin
        o_and = a & b; // assign value: a and b, into the o_and
        o_or  = a | b;
    end

endmodule
