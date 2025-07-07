module full_adder (
    input  logic a,        // First input bit
    input  logic b,        // Second input bit
    input  logic cin,      // Carry-in
    output logic sum,      // Sum output
    output logic cout      // Carry-out
);

    // Combinational logic for sum and carry
    always_comb begin
        sum  = a ^ b ^ cin;
        cout = (a & b) | (b & cin) | (a & cin);
    end

endmodule
