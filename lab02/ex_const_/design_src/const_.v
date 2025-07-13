module const_ (
    output reg ot, // output 1 constantly
    output reg of, // output 0 constantly
    output reg [7:0] o1, // output (101) in binary constantly
    output reg [7:0] o2, // output (101) in decimal constantly
    output reg [7:0] o_auto_expand, // output 5 constantly
    output reg [7:0] o_auto_cut // try to output 345 constantly
);
    always @(*) begin
        ot            = 1;
        of            = 0;
        o1            = 3'b101;
        o2            = 8'd101;
        o_auto_expand = 5;
        o_auto_cut    = 345;    // 345 % 256 = 89
    end
endmodule
