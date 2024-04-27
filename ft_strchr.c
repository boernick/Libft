#include <unistd.h>
#include <stdio.h>

char *ft_strchr(char* str, char c)
{
    while (*str != '\0')
    {
        if (*str == c)
            return (str);
        str++;
    }
    return ('\0');
}

int main(void)
{
    char *result = ft_strchr("testtestetsetsetestsetsetse", 'm');
    printf("%s", result);
    return (0);
}