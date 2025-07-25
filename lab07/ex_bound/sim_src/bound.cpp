#include "Vbound.h"
#include "verilated.h"
#include "verilated_vcd_c.h"
#include <iostream>
#include <fstream>
#include <sstream>
#include <bitset>
#include <iomanip>

std::string format_bin_unsigned(int value, int bits) {
    std::bitset<8> b(value & ((1 << bits) - 1));
    std::ostringstream oss;
    oss << b.to_string()
        << "(u" << std::setw(3) << static_cast<unsigned int>(value) << ")";
    return oss.str();
}

int main(int argc, char **argv) {
    if (argc != 5) {
        std::cout << "usage: obj <inputs> <waveform> <log> <result>" << std::endl;
        return 1;
    }

    Verilated::commandArgs(argc, argv);
    Vbound* dut = new Vbound;

    Verilated::traceEverOn(true);
    VerilatedVcdC* tfp = new VerilatedVcdC;
    dut->trace(tfp, 99);
    tfp->open(argv[2]);

    std::ifstream infile(argv[1]);
    std::ofstream log(argv[3]);

    log << "##SEC_STUDENT_CAN_SEE" << std::endl;
    std::cout << "##SEC_STUDENT_CAN_SEE" << std::endl;

    log << "     a                |  bound_a        |  bound_a*       | PASS?" << std::endl;
    std::cout << "     a                |  bound_a        |  bound_a*       | PASS?" << std::endl;

    int count = 0;
    bool has_fail = false;
    std::string line;

    while (std::getline(infile, line)) {
        if (line.empty()) continue;
        std::istringstream iss(line);
        int a;
        if (!(iss >> a)) continue;

        dut->a = a;
        dut->eval();
        tfp->dump(count++ * 10);

        unsigned int ua = static_cast<unsigned int>(a);
        unsigned int bound_g = (ua > 63) ? 63 : ua;
        bool pass = (dut->bound_a == bound_g);
        const char* pass_str = pass ? "-" : "fail";
        if (!pass) has_fail = true;

        std::ostringstream oss;
        oss << " " << std::setw(20) << format_bin_unsigned(a, 8) << " | "
            << std::setw(15) << format_bin_unsigned(dut->bound_a, 8) << " | "
            << std::setw(15) << format_bin_unsigned(bound_g, 8) << " | " << pass_str;

        std::string output_line = oss.str();
        log << output_line << std::endl;
        std::cout << output_line << std::endl;
    }

    tfp->dump(count * 10 + 10);
    tfp->dump(count * 10 + 20);
    tfp->dump(count * 10 + 30);
    tfp->dump(count * 10 + 40);

    log << "##END_STUDENT_CAN_SEE" << std::endl;
    std::cout << "##END_STUDENT_CAN_SEE" << std::endl;

    log.close();
    tfp->close();

    std::ofstream result(argv[4]);
    result << (has_fail ? "fail" : "pass") << std::endl;

    delete dut;
    delete tfp;
    return 0;
}
