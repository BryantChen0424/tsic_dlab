module sw2way (
    input  a,
    input  b,
    output reg na_and_nb, // = ~a & ~b
    output reg sw // if exactly one of a or b is 1? 1 for yes.
);
    reg not_a;
    reg not_b;

    always @(*) begin
        /* inner signals assignment here */
        not_a = ;
        not_b = ;

        na_and_nb = ;/* using inners signals here */
        sw        =; 
    end
endmodule