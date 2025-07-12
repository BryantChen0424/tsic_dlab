module minmax (
    input  [7:0] a,
    input  [7:0] b,
    input        s,
    output reg [7:0] o
    // if s is 0, o = max(a, b)
    // if s is 1, o = min(a, b)
);
    always @(*) begin
        if (s == 0) begin
            if (/* */) begin
                o = //
            end
            else begin
                o = //
            end
        end
        else begin
            if (/* */) begin
                o = //
            end
            else begin
                o = //
            end
        end
    end
endmodule
