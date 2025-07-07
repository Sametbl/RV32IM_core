// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing declarations
#include "verilated_fst_c.h"


void Vprocessor_tb___024root__traceDeclTypesSub0(VerilatedFst* tracep) {
    {
        const char* __VenumItemNames[]
        = {"NOP", "LUI", "AUIPC", "JAL", "JALR", "BEQ", 
                                "BNE", "BLT", "BGE", 
                                "BLTU", "BGEU", "LB", 
                                "LH", "LW", "LBU", 
                                "LHU", "SB", "SH", 
                                "SW", "ADDI", "SLTI", 
                                "SLTIU", "XORI", "ORI", 
                                "ANDI", "SLLI", "SRLI", 
                                "SRAI", "ADD", "SUB", 
                                "SLT", "SLTU", "XOR", 
                                "OR", "AND", "SLL", 
                                "SRL", "SRA", "ECALL", 
                                "EBREAK", "PAUSE", 
                                "MUL", "MULH", "MULSU", 
                                "MULU", "DIV", "DIVU", 
                                "REM", "REMU"};
        const char* __VenumItemValues[]
        = {"0", "1", "10", "11", "100", "101", "110", 
                                "111", "1000", "1001", 
                                "1010", "1011", "1100", 
                                "1101", "1110", "1111", 
                                "10000", "10001", "10010", 
                                "10011", "10100", "10101", 
                                "10110", "10111", "11000", 
                                "11001", "11010", "11011", 
                                "11100", "11101", "11110", 
                                "11111", "100000", 
                                "100001", "100010", 
                                "100011", "100100", 
                                "100101", "100110", 
                                "100111", "101000", 
                                "101001", "101010", 
                                "101011", "101100", 
                                "101101", "101110", 
                                "101111", "110000"};
        tracep->declDTypeEnum(1, "pipeline_pkg::instr_e", 49, 6, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"NONE", "R_TYPE", "I_TYPE", "L_TYPE", "S_TYPE", 
                                "B_TYPE", "E_TYPE", 
                                "SYS_TYPE"};
        const char* __VenumItemValues[]
        = {"0", "1", "10", "11", "100", "101", "110", 
                                "111"};
        tracep->declDTypeEnum(2, "pipeline_pkg::instr_type_e", 8, 4, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"ACTIVE", "MUL_DONE", "DIV_DONE", "BOTH_DONE"};
        const char* __VenumItemValues[]
        = {"0", "1", "10", "11"};
        tracep->declDTypeEnum(3, "multiplier_divider_unit.state_t", 4, 2, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"IDLE", "INIT", "EXECUTE", "WRITE"};
        const char* __VenumItemValues[]
        = {"0", "1", "10", "11"};
        tracep->declDTypeEnum(4, "divider_32bit.states", 4, 2, __VenumItemNames, __VenumItemValues);
    }
    {
        const char* __VenumItemNames[]
        = {"IDLE", "FETCH", "ACTIVE", "WRITE"};
        const char* __VenumItemValues[]
        = {"0", "1", "10", "11"};
        tracep->declDTypeEnum(5, "multiplier_32bit.state_t", 4, 2, __VenumItemNames, __VenumItemValues);
    }
}

void Vprocessor_tb___024root__trace_decl_types(VerilatedFst* tracep) {
    Vprocessor_tb___024root__traceDeclTypesSub0(tracep);
}
