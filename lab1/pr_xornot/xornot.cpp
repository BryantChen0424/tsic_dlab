#include "Vxornot.h"
#include "verilated.h"
#include "verilated_vcd_c.h"
#include <iostream>
#include <fstream>
#include <iomanip>
#include <sstream>

int main(int argc, char **argv) {
    Verilated::commandArgs(argc, argv);

    Vxornot* dut = new Vxornot;
    VerilatedVcdC* tfp = new VerilatedVcdC;
    Verilated::traceEverOn(true);
    dut->trace(tfp, 99);
    tfp->open("wave.vcd");

    std::ofstream logfile("log.txt");
    std::ofstream resultfile("result.txt");

    if (!logfile.is_open() || !resultfile.is_open()) {
        std::cerr << "Failed to open log.txt or result.txt" << std::endl;
        return 1;
    }

    bool any_fail = false;

    std::cout << "##SEC_STUDENT_CAN_SEE\n";
    logfile   << "##SEC_STUDENT_CAN_SEE\n";

    std::cout << "  A  B | o_xor a_not b_not | o_xor* a_not* b_not* | pass?\n";
    logfile  << "  A  B | o_xor a_not b_not | o_xor* a_not* b_not* | pass?\n";
    std::cout << "-----------------------------------------------------------\n";
    logfile  << "-----------------------------------------------------------\n";

    size_t timestamp = 0;

    for (int a = 0; a <= 1; ++a) {
        for (int b = 0; b <= 1; ++b) {
            dut->a = a;
            dut->b = b;
            dut->eval();

            int o_xor_dut = dut->o_xor;
            int a_not_dut = dut->a_not;
            int b_not_dut = dut->b_not;

            int o_xor_golden = a ^ b;
            int a_not_golden = ~a & 0x1;
            int b_not_golden = ~b & 0x1;

            bool pass = (o_xor_dut == o_xor_golden) &&
                        (a_not_dut == a_not_golden) &&
                        (b_not_dut == b_not_golden);

            std::string result_str = pass ? "-" : "fail";
            if (!pass) any_fail = true;

            std::ostringstream line;
            line << std::setw(3) << a
                 << std::setw(3) << b << " |"
                 << std::setw(7) << o_xor_dut
                 << std::setw(7) << a_not_dut
                 << std::setw(8) << b_not_dut << " |"
                 << std::setw(8) << o_xor_golden
                 << std::setw(9) << a_not_golden
                 << std::setw(10) << b_not_golden << " | "
                 << std::setw(6) << result_str;

            std::cout  << line.str() << "\n";
            logfile   << line.str() << "\n";

            tfp->dump(timestamp++);
        }
    }

    for (int i = 0; i < 4; ++i)
        tfp->dump(timestamp + i);

    std::cout << "##END_STUDENT_CAN_SEE\n";
    logfile   << "##END_STUDENT_CAN_SEE\n";

    std::string final_result = any_fail ? "fail" : "congratulation";
    std::cout     << final_result << std::endl;
    logfile       << final_result << std::endl;
    resultfile    << (any_fail ? "fail" : "pass") << std::endl;

    tfp->close();
    logfile.close();
    resultfile.close();
    delete dut;
    delete tfp;
    return 0;
}
