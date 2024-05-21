# tests/Makefile

CC = gcc
CFLAGS = -Wall -Wextra -Werror
LIBFT_DIR = ../libft
LIBFT = $(LIBFT_DIR)/libft.a

# Test source files
TEST_SRCS = test_ft_strlen.c test_ft_strcpy.c
TEST_OBJS = $(TEST_SRCS:.c=.o)
TEST_EXEC = test_libft

all: $(TEST_EXEC)

$(LIBFT):
    make -C $(LIBFT_DIR)

$(TEST_EXEC): $(TEST_OBJS) $(LIBFT)
    $(CC) $(CFLAGS) -o $@ $(TEST_OBJS) -L$(LIBFT_DIR) -lft

%.o: %.c
    $(CC) $(CFLAGS) -c $< -o $@

clean:
    rm -f $(TEST_EXEC) $(TEST_OBJS)

fclean: clean
    make -C $(LIBFT_DIR) fclean

re: fclean all
