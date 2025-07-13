module hello (
    input      [7:0] in, // random input 8-bits character
    output reg [7:0] out // always be equal to in
);

    always @(*) begin
        out = in; // assign the 'in' into the 'out'
    end

endmodule
