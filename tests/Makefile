# tests/Makefile

# Compiler and flags
CC = gcc
CFLAGS = -Wall -Wextra -Werror

# Directory for libft
LIBFT_DIR = ../libft
LIBFT = $(LIBFT_DIR)/libft.a

# Test source files
TEST_SRCS = test_ft_strlen.c test_ft_strcpy.c
TEST_OBJS = $(TEST_SRCS:.c=.o)
TEST_EXEC = test_libft

# Default target: build all tests
all: $(TEST_EXEC)

# Ensure libft is built before compiling tests
$(LIBFT):
    make -C $(LIBFT_DIR)

# Build the test executable
$(TEST_EXEC): $(TEST_OBJS) $(LIBFT)
    $(CC) $(CFLAGS) -o $@ $(TEST_OBJS) -L$(LIBFT_DIR) -lft

# Compile each test source file into an object file
%.o: %.c
    $(CC) $(CFLAGS) -c $< -o $@

# Clean generated files
clean:
    rm -f $(TEST_EXEC) $(TEST_OBJS)

# Clean everything including libft
fclean: clean
    make -C $(LIBFT_DIR) fclean

# Recompile everything
re: fclean all
