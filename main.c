#include "libft.h"
#include <stdio.h>
#include <string.h>
#include <ctype.h>

void test_char_functions() {
    printf("Testing character functions:\n");
    printf("ft_isalpha('A'): %d\n", ft_isalpha('A'));
    printf("ft_isdigit('5'): %d\n", ft_isdigit('5'));
    printf("ft_isalnum('Z'): %d\n", ft_isalnum('Z'));
    printf("ft_isascii(127): %d\n", ft_isascii(127));
    printf("ft_isprint(' '): %d\n", ft_isprint(' '));
    printf("ft_toupper('a'): %c\n", ft_toupper('a'));
    printf("ft_tolower('A'): %c\n", ft_tolower('A'));
    printf("\n");
}

void test_string_functions() {
    printf("Testing string functions:\n");
    char str1[] = "Hello, World!";
    char str2[] = "Hello";
    
    printf("ft_strlen(\"%s\"): %zu\n", str1, ft_strlen(str1));
    printf("ft_strlcpy(dest, \"%s\", 6): %zu\n", str2, ft_strlcpy(str1, str2, 6));
    printf("Result: %s\n", str1);
    
    char str3[] = "Hello";
    char str4[] = ", World!";
    printf("ft_strlcat(\"%s\", \"%s\", 13): %d\n", str3, str4, ft_strlcat(str3, str4, 13));
    printf("Result: %s\n", str3);
    
    printf("ft_strchr(\"%s\", 'o'): %s\n", str1, ft_strchr(str1, 'o'));
    printf("ft_strrchr(\"%s\", 'o'): %s\n", str1, ft_strrchr(str1, 'o'));
    printf("ft_strncmp(\"%s\", \"%s\", 5): %d\n", str1, str2, ft_strncmp(str1, str2, 5));
    printf("ft_strnstr(\"%s\", \"World\", 13): %s\n", str1, ft_strnstr(str1, "World", 13));
    printf("\n");
}

void test_memory_functions() {
    printf("Testing memory functions:\n");
    char mem1[20] = "Hello, World!";
    char mem2[20];
    
    ft_memset(mem1, '*', 5);
    printf("ft_memset result: %s\n", mem1);
    
    ft_bzero(mem1, 5);
    printf("ft_bzero result: %s\n", mem1 + 5);
    
    ft_memcpy(mem2, "Copy this", 9);
    printf("ft_memcpy result: %s\n", mem2);
    
    ft_memmove(mem2 + 2, mem2, 5);
    printf("ft_memmove result: %s\n", mem2);
    
    printf("ft_memchr(\"Hello\", 'l', 5): %s\n", (char *)ft_memchr("Hello", 'l', 5));
    printf("ft_memcmp(\"Hello\", \"Hellx\", 5): %d\n", ft_memcmp("Hello", "Hellx", 5));
    printf("\n");
}

void test_conversion_functions() {
    printf("Testing conversion functions:\n");
    printf("ft_atoi(\"  -123\"): %d\n", ft_atoi("  -123"));
    char *num_str = ft_itoa(-42);
    printf("ft_itoa(-42): %s\n", num_str);
    free(num_str);
    printf("\n");
}

void test_allocation_functions() {
    printf("Testing allocation functions:\n");
    char *str = ft_strdup("Duplicate me");
    printf("ft_strdup result: %s\n", str);
    free(str);
    
    str = ft_substr("Hello, World!", 7, 5);
    printf("ft_substr result: %s\n", str);
    free(str);
    
    str = ft_strjoin("Hello", " World!");
    printf("ft_strjoin result: %s\n", str);
    free(str);
    
    str = ft_strtrim("  Hello, World!  ", " ");
    printf("ft_strtrim result: %s\n", str);
    free(str);
    
    char **split = ft_split("Hello,World,Split,Me", ',');
    printf("ft_split result:\n");
    for (int i = 0; split[i] != NULL; i++) {
        printf("%s\n", split[i]);
        free(split[i]);
    }
    free(split);
    printf("\n");
}

char to_upper(unsigned int i, char c) {
    (void)i;
    return ft_toupper(c);
}

void print_char(unsigned int i, char *c) {
    printf("Character at index %u: %c\n", i, *c);
}

void test_function_application() {
    printf("Testing function application:\n");
    char str[] = "hello";
    char *result = ft_strmapi(str, to_upper);
    printf("ft_strmapi result: %s\n", result);
    free(result);
    
    ft_striteri(str, print_char);
    printf("\n");
}

void test_fd_functions() {
    printf("Testing file descriptor functions:\n");
    ft_putchar_fd('A', 1);
    ft_putstr_fd("\nHello, ", 1);
    ft_putendl_fd("World!", 1);
    ft_putnbr_fd(-42, 1);
    printf("\n\n");
}

void print_list_item(void *content) {
	printf("%s\n", (char *)content);
}

void test_bonus_functions() {
    printf("Testing bonus functions:\n");
    t_list *list = ft_lstnew("First");
    ft_lstadd_front(&list, ft_lstnew("Second"));
    ft_lstadd_back(&list, ft_lstnew("Third"));
    
    printf("List size: %d\n", ft_lstsize(list));
    printf("Last element: %s\n", (char *)ft_lstlast(list)->content);
    
    ft_lstiter(list, print_list_item);
    
    void *(*f)(void *) = (void *(*)(void *))strdup;
    void (*del)(void *) = free;
    t_list *new_list = ft_lstmap(list, f, del);
    
    printf("Mapped list:\n");
    ft_lstiter(new_list, print_list_item);
    
    ft_lstclear(&list, NULL);
    ft_lstclear(&new_list, free);
    printf("\n");
}

int main() {
    test_char_functions();
    test_string_functions();
    test_memory_functions();
    test_conversion_functions();
    test_allocation_functions();
    test_function_application();
    test_fd_functions();
    test_bonus_functions();
    
    return 0;
}
