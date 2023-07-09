## Makefile Script

# Name of compiler
CC = gcc

# Name of existing directories
SRC_DIR = source
INC_DIR = include

# Name of generating / creating directories
OBJ_DIR = object
BIN_DIR = binary

# Compiler & linker flags
CFLAGS = -Wall -Wextra -g
LFLAGS = # Note - add the linker file according to the code convenience

# Describing directory path
SRC := $(wildcard $(SRC_DIR)/*.c)
INC := $(wildcard $(INC_DIR)/*.h)
OBJ := $(patsubst $(SRC_DIR)/%.c, $(OBJ_DIR)/%.o, $(SRC))

# Executable file
EXE = $(BIN_DIR)/main

# Default target
all:  $(EXE)

# Compiling all object files
$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c $(INC)
	@mkdir -p $(@D)
	@echo "Compiling $(notdir $<)..."
	$(CC) $(CFLAGS) -I$(INC_DIR) -c $(<) -o $(@)

# Link object files into the executable
$(EXE): $(OBJ)
	@mkdir -p $(@D)
	@echo "Linking $(notdir $@)..."
	$(CC) $(CFLAGS) $(^) -o $(@)

clean:
	rm -rf $(OBJ_DIR)
	rm -rf $(BIN_DIR)

.PHONY: all clean

## End of Makefile