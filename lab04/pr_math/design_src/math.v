module math (
    input  [3:0] a,
    output reg [7:0] mul2, // output a*2
    output reg [3:0] div2, // output a/2
    output reg [3:0] mod2, // output a%2
    output reg [7:0] mul4, // output a*4
    output reg [3:0] div4, // output a/4
    output reg [3:0] mod4  // output a%4
);
    always @(*) begin
        mul2 = /* assignmenmt here */
        div2 = 
        mod2 = 

        mul4 = 
        div4 = 
        mod4 = 
    end
endmodule
