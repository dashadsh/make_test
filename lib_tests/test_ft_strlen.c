// tests/test_ft_strcpy.c
#include <stdio.h>
#include <string.h>
#include "libft.h"

void test_ft_strcpy() {
    printf("Test ft_strcpy:\n");
    char src[50] = "Hello, World!";
    char dest[50];
    ft_strcpy(dest, src);
    printf("Source: \"%s\"\n", src);
    printf("Expected: \"%s\"\n", src);
    printf("Got: \"%s\"\n", dest);
    printf(strcmp(dest, src) == 0 ? "PASS\n" : "FAIL\n");
}
