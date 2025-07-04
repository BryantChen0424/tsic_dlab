module sw2way (
    input  a,
    input  b,
    output reg na_and_nb,
    // more output
);
    reg not_a;
    reg not_b;

    always @(*) begin
        /* inner signals assignment */

        na_and_nb = /* using inners signals here */
        sw        = /* using inners signals here */
    end

endmodule
