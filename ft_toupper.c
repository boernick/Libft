#include <unistd.h>
#include <stdio.h>

char ft_toupper(char c)
{
    if (c >= 97 && c <= 122)
        c -= 32;    
    return c;
}

int main(void)
{   
    char test = 'b';
    char result = ft_toupper(test);
    printf("%c", result);
}