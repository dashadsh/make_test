# Makefile

CXX = g++
CXXFLAGS = -std=c++17 -Wall

# Directories
SRC_DIR = .
OBJ_DIR = ./obj
BIN_DIR = ./bin

# Source files
SRCS = $(wildcard $(SRC_DIR)/*.cpp)
OBJS = $(SRCS:$(SRC_DIR)/%.cpp=$(OBJ_DIR)/%.o)

# Executable
EXEC = $(BIN_DIR)/main
TEST_EXEC = $(BIN_DIR)/test

# Rules
all: $(EXEC) $(TEST_EXEC)

$(EXEC): $(OBJ_DIR)/main.o $(OBJ_DIR)/math_functions.o
	@mkdir -p $(BIN_DIR)
	$(CXX) $(CXXFLAGS) -o $@ $^

$(TEST_EXEC): $(OBJ_DIR)/test_math_functions.o $(OBJ_DIR)/math_functions.o
	@mkdir -p $(BIN_DIR)
	$(CXX) $(CXXFLAGS) -o $@ $^

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.cpp
	@mkdir -p $(OBJ_DIR)
	$(CXX) $(CXXFLAGS) -c -o $@ $<

clean:
	rm -rf $(OBJ_DIR) $(BIN_DIR)

test: $(TEST_EXEC)
	./$(TEST_EXEC)

.PHONY: all clean test
