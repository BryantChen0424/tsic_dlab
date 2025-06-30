TOP       = array
SRC_V     = $(TOP).v
SRC_CPP   = $(TOP).cpp
EXEC      = V$(TOP)
OBJ_DIR   = obj_dir
VCD       = wave.vcd

VERILATOR_FLAGS =  --public -Wno-WIDTHEXPAND -Wno-WIDTHTRUNC --trace --hierarchical --trace-depth 100 --trace-structs --top-module $(TOP)

.PHONY: all dut test clean

all: $(OBJ_DIR)/$(EXEC)

dut:
	verilator $(VERILATOR_FLAGS) --cc $(SRC_V)

test: all
	./$(OBJ_DIR)/$(EXEC)

$(OBJ_DIR)/$(EXEC): $(SRC_V) $(SRC_CPP)
	verilator $(VERILATOR_FLAGS) --cc $(SRC_V) --exe $(SRC_CPP) --build

clean:
	rm -rf $(OBJ_DIR) $(VCD) *.txt
