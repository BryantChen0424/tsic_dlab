module const2 (
    output reg [7:0] o_auto_expand,
    output reg [7:0] o_auto_cut,
    output reg [7:0] o_neg
);

    always @(*) begin
        o_auto_expand = 5;
        o_auto_cut    = 345;
        o_neg         = -5;
    end

endmodule
