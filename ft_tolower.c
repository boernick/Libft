#include <unistd.h>
#include <stdio.h>

char ft_tolower(char c)
{
    if (c >= 65 && c <= 90)
        c += 32;    
    return c;
}

int main(void)
{   
    char test = 'B';
    char result = ft_tolower(test);
    printf("%c", result);
}