// tests/test_ft_strlen.c
#include <stdio.h>
#include <string.h>
#include "libft.h"

void test_ft_strlen() {
    printf("Test ft_strlen:\n");
    char *str = "Hello, World!";
    size_t result = ft_strlen(str);
    printf("Input: \"%s\"\n", str);
    printf("Expected: %zu\n", strlen(str));
    printf("Got: %zu\n", result);
    printf(result == strlen(str) ? "PASS\n" : "FAIL\n");
}
