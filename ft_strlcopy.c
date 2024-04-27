#include <unistd.h>
#include <stdio.h>

unsigned int ft_strlcpy(char* dest, char* src, unsigned int n)
{
    unsigned int i;
    
    i = 0;
    while (src[i] != '\0' && i < n)
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return (i);
}

int main(void)
{
    char str1[] = "testestest";
    char str2[4];
    int result = ft_strlcpy(str2, str1, 4);
    printf("%d", res);
    return (0);
}