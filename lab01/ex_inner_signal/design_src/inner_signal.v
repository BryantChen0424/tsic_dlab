module inner_signal (
    input  a,
    input  b,
    output reg o_and,
    output reg o_or,
    output reg o_nand,
    output reg o_nor
);
    reg and_val; // inner signals
    reg or_val;

    always @(*) begin
        and_val = a & b; // first, we assign the value for and_val
        or_val  = a | b;

        o_and  = and_val; // use and_val directly
        o_or   = or_val;
        o_nand = ~and_val; // use and_val to form a boolean exprssion
        o_nor  = ~or_val; 
    end
endmodule
