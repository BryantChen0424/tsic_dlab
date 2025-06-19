#include "Vtry_const.h"
#include "verilated.h"
#include "verilated_vcd_c.h"
#include <iostream>
#include <fstream>
#include <iomanip>
#include <bitset>
#include <cstdint>

std::string to_binary(uint16_t value) {
    return std::bitset<16>(value).to_string();
}

int main(int argc, char **argv) {
    Verilated::commandArgs(argc, argv);

    Vtry_const* dut = new Vtry_const;
    VerilatedVcdC* tfp = new VerilatedVcdC;
    Verilated::traceEverOn(true);
    dut->trace(tfp, 99);
    tfp->open("wave.vcd");

    std::ofstream logfile("log.txt");
    std::ofstream resultfile("result.txt");

    std::cout << "##SEC_STUDENT_CAN_SEE\n";
    logfile   << "##SEC_STUDENT_CAN_SEE\n";

    dut->eval();
    uint16_t value = dut->o16;
    int16_t signed_val = static_cast<int16_t>(value);

    std::string bin_str = to_binary(value);
    std::ostringstream line;

    // 標題列
    std::string header =
        "   binary              | unsigned |  signed |   hex  |";
    std::string divider =
        "-----------------------+----------+---------+--------+";

    std::ostringstream row;
    row << " " << bin_str << " | "
        << std::setw(8) << static_cast<unsigned>(value) << " | "
        << std::setw(7) << signed_val << " | "
        << " 0x" << std::uppercase << std::hex << std::setw(4)
        << std::setfill('0') << value << " |";

    std::cout  << header  << "\n" << divider << "\n" << row.str() << "\n";
    logfile    << header  << "\n" << divider << "\n" << row.str() << "\n";

    for (int i = 0; i < 4; ++i)
        tfp->dump(i);

    std::cout << "##END_STUDENT_CAN_SEE\n";
    logfile   << "##END_STUDENT_CAN_SEE\n";

    resultfile << "pass\n";

    tfp->close();
    logfile.close();
    resultfile.close();
    delete dut;
    delete tfp;

    return 0;
}
