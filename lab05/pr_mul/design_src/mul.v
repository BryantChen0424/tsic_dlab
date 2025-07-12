module mul (
    input  [3:0] a,
    output reg [7:0] mul2, // = a << 1
    output reg [7:0] mul4, // = a << 2
    output reg [7:0] mul8, // = a << 3
    output reg       be4   // = if a%4 is 0. 1 for yes, 0 for no.
);
    always @(*) begin
        mul2 = 
        mul4 = 
        mul8 = 
        be4  = // hint: when a%4 is zero, the first 2 bits from the right end of a should both be '0';
    end
endmodule
