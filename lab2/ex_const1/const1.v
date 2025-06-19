module const1 (
    output reg ot,
    output reg of,
    output reg [7:0] o1,
    output reg [7:0] o2,
    output reg [7:0] o16
);

    always @(*) begin
        ot   = 1'b1;
        of   = 1'b0;
        o1   = 8'b101; // 'b101
        o2   = 8'd101; // 'd101
        o16  = 8'h5A;
    end

endmodule
