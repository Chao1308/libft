#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "libft.h"

void test_is_functions()
{
    printf("Testing is functions:\n");
    printf("ft_isalpha('a'): %d\n", ft_isalpha('a'));
    printf("ft_isdigit('5'): %d\n", ft_isdigit('5'));
    printf("ft_isalnum('B'): %d\n", ft_isalnum('B'));
    printf("ft_isascii(128): %d\n", ft_isascii(128));
    printf("ft_isprint(' '): %d\n", ft_isprint(' '));
}

void test_to_functions()
{
    printf("\nTesting to functions:\n");
    printf("ft_toupper('a'): %c\n", ft_toupper('a'));
    printf("ft_tolower('A'): %c\n", ft_tolower('A'));
}

void test_str_functions()
{
    printf("\nTesting string functions:\n");
    char str1[] = "Hello";
    char str2[] = "World";
    
    printf("ft_strlen(\"Hello\"): %zu\n", ft_strlen(str1));
    printf("ft_strlcpy(dst, \"Hello\", 4): %zu\n", ft_strlcpy(str2, str1, 4));
    printf("str2 after strlcpy: %s\n", str2);
    printf("ft_strlcat(\"Hello\", \"World\", 10): %zu\n", ft_strlcat(str1, str2, 10));
    printf("str1 after strlcat: %s\n", str1);
    printf("ft_strchr(\"Hello\", 'l'): %s\n", ft_strchr(str1, 'l'));
    printf("ft_strrchr(\"Hello\", 'l'): %s\n", ft_strrchr(str1, 'l'));
    printf("ft_strncmp(\"Hello\", \"Help\", 4): %d\n", ft_strncmp(str1, "Help", 4));
    printf("ft_strnstr(\"Hello World\", \"Wor\", 11): %s\n", ft_strnstr("Hello World", "Wor", 11));
}

void test_mem_functions()
{
    printf("\nTesting memory functions:\n");
    char mem1[20] = "Hello World";
    char mem2[20];
    
    ft_memset(mem1, '*', 5);
    printf("ft_memset(\"Hello World\", '*', 5): %s\n", mem1);
    
    ft_bzero(mem1, 5);
    printf("ft_bzero(mem1, 5): %s\n", mem1 + 5);
    
    ft_memcpy(mem2, "Hello World", 12);
    printf("ft_memcpy(mem2, \"Hello World\", 12): %s\n", mem2);
    
    ft_memmove(mem2 + 6, mem2, 5);
    printf("ft_memmove(mem2 + 6, mem2, 5): %s\n", mem2);
    
    printf("ft_memchr(\"Hello World\", 'o', 11): %s\n", (char *)ft_memchr("Hello World", 'o', 11));
    printf("ft_memcmp(\"Hello\", \"Hello\", 5): %d\n", ft_memcmp("Hello", "Hello", 5));
}

void test_atoi()
{
    printf("\nTesting ft_atoi:\n");
    printf("ft_atoi(\"  -123\"): %d\n", ft_atoi("  -123"));
    printf("ft_atoi(\"+456\"): %d\n", ft_atoi("+456"));
}

void test_calloc()
{
    printf("\nTesting ft_calloc:\n");
    int *arr = (int *)ft_calloc(5, sizeof(int));
    if (arr)
    {
        printf("ft_calloc(5, sizeof(int)): ");
        for (int i = 0; i < 5; i++)
            printf("%d ", arr[i]);
        printf("\n");
        free(arr);
    }
    else
        printf("ft_calloc failed\n");
}

void test_strdup()
{
    printf("\nTesting ft_strdup:\n");
    char *dup = ft_strdup("Hello World");
    if (dup)
    {
        printf("ft_strdup(\"Hello World\"): %s\n", dup);
        free(dup);
    }
    else
        printf("ft_strdup failed\n");
}

int main()
{
    test_is_functions();
    test_to_functions();
    test_str_functions();
    test_mem_functions();
    test_atoi();
    test_calloc();
    test_strdup();

    return 0;
}
