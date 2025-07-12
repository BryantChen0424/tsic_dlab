module div (
    input  [7:0] a,
    output reg [7:0] div2, // = a / 2
    output reg [7:0] div4, // = a / 4
    output reg [7:0] div8  // = a / 8
);
    always @(*) begin
        // this will work.
        // div2 = a >> 1;  
        // div4 = a >> 2;  
        // div8 = a >> 3;  

        // and this will also work.
        div2 = {1'b0, a[7:1]};  
        div4 = {2'b0, a[7:2]};  
        div8 = {3'b0, a[7:3]};  
    end
endmodule
