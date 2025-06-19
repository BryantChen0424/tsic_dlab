#include "Vconst2.h"
#include "verilated.h"
#include "verilated_vcd_c.h"
#include <iostream>
#include <fstream>
#include <iomanip>
#include <sstream>
#include <bitset>

std::string to_binary(int value, int width = 8) {
    return std::bitset<8>(value & 0xFF).to_string().substr(8 - width);
}

int main(int argc, char **argv) {
    Verilated::commandArgs(argc, argv);

    Vconst2* dut = new Vconst2;
    VerilatedVcdC* tfp = new VerilatedVcdC;
    Verilated::traceEverOn(true);
    dut->trace(tfp, 99);
    tfp->open("wave.vcd");

    std::ofstream logfile("log.txt");
    std::ofstream resultfile("result.txt");

    if (!logfile.is_open() || !resultfile.is_open()) {
        std::cerr << "Failed to open output files." << std::endl;
        return 1;
    }

    bool any_fail = false;

    std::cout << "##SEC_STUDENT_CAN_SEE\n";
    logfile   << "##SEC_STUDENT_CAN_SEE\n";

    std::cout << "  expand  cut    neg |  expand* cut*  neg* | bin(expand) bin(cut) bin(neg) | pass?\n";
    logfile  << "  expand  cut    neg |  expand* cut*  neg* | bin(expand) bin(cut) bin(neg) | pass?\n";
    std::cout << "-------------------------------------------------------------------------------\n";
    logfile  << "-------------------------------------------------------------------------------\n";

    dut->eval();

    int o_expand = dut->o_auto_expand;
    int o_cut    = dut->o_auto_cut;
    int o_neg    = static_cast<int8_t>(dut->o_neg); // 解釋為有號數

    int o_expand_g = 5;
    int o_cut_g    = 345 & 0xFF;  // Verilog 截斷至低 8 位
    int o_neg_g    = -5;

    std::string bin_expand = to_binary(o_expand);
    std::string bin_cut    = to_binary(o_cut);
    std::string bin_neg    = to_binary(o_neg);

    std::ostringstream line;
    bool pass = (o_expand == o_expand_g) && (o_cut == o_cut_g) && (o_neg == o_neg_g);
    if (!pass) any_fail = true;

    line << std::setw(8) << o_expand
         << std::setw(6) << o_cut
         << std::setw(7) << o_neg << " | "
         << std::setw(8) << o_expand_g
         << std::setw(6) << o_cut_g
         << std::setw(7) << o_neg_g << " | "
         << bin_expand << "   " << bin_cut << "   " << bin_neg << " | "
         << (pass ? "   -" : "fail");

    std::cout  << line.str() << "\n";
    logfile   << line.str() << "\n";

    for (int i = 0; i < 5; ++i)
        tfp->dump(i);

    std::cout << "##END_STUDENT_CAN_SEE\n";
    logfile   << "##END_STUDENT_CAN_SEE\n";

    std::string final_result = any_fail ? "fail" : "congratulation";
    std::cout    << final_result << std::endl;
    logfile      << final_result << std::endl;
    resultfile   << (any_fail ? "fail" : "pass") << std::endl;

    tfp->close();
    logfile.close();
    resultfile.close();
    delete dut;
    delete tfp;

    return 0;
}
