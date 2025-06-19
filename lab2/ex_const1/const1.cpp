#include "Vconst1.h"
#include "verilated.h"
#include "verilated_vcd_c.h"
#include <iostream>
#include <fstream>
#include <iomanip>
#include <sstream>
#include <bitset>

std::string to_binary(int value, int width = 8) {
    return std::bitset<8>(value).to_string().substr(8 - width);
}

int main(int argc, char **argv) {
    Verilated::commandArgs(argc, argv);

    Vconst1* dut = new Vconst1;
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

    std::cout << "   ot of   o1   o2   o16 |   ot*  of*  o1*  o2* o16* | bin(o1) bin(o1*) bin(o2) bin(o2*) bin(o16) bin(o16*) | pass?\n";
    logfile  << "   ot of   o1   o2   o16 |   ot*  of*  o1*  o2* o16* | bin(o1) bin(o1*) bin(o2) bin(o2*) bin(o16) bin(o16*) | pass?\n";
    std::cout << "---------------------------------------------------------------------------------------------------------------------\n";
    logfile  << "---------------------------------------------------------------------------------------------------------------------\n";

    dut->eval();

    int ot     = dut->ot;
    int of     = dut->of;
    int o1     = dut->o1;
    int o2     = dut->o2;
    int o16    = dut->o16;

    int ot_g   = 1;
    int of_g   = 0;
    int o1_g   = 0b101;
    int o2_g   = 101;
    int o16_g  = 0x5A;

    bool pass = (ot == ot_g) && (of == of_g) && (o1 == o1_g) &&
                (o2 == o2_g) && (o16 == o16_g);

    std::string result_str = pass ? "-" : "fail";
    if (!pass) any_fail = true;

    std::ostringstream line;
    line << std::setw(5) << ot
         << std::setw(3) << of
         << std::setw(5) << o1
         << std::setw(5) << o2
         << std::setw(6) << o16 << " | "
         << std::setw(5) << ot_g
         << std::setw(4) << of_g
         << std::setw(5) << o1_g
         << std::setw(5) << o2_g
         << std::setw(6) << o16_g << " | "
         << std::setw(8) << to_binary(o1)
         << " " << std::setw(8) << to_binary(o1_g)
         << " " << std::setw(8) << to_binary(o2)
         << " " << std::setw(8) << to_binary(o2_g)
         << " " << std::setw(8) << to_binary(o16)
         << " " << std::setw(8) << to_binary(o16_g)
         << " | " << std::setw(6) << result_str;

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
