#include <unistd.h>
#include <stdio.h>

unsigned int ft_strlen(char *str)
{
    unsigned int i;
    
    i = 0;
    while (str[i] != '\0')
        i++;
    return (i);
}

int main(void)
{
    char str[] = "sjofjrowjr29-rjw0-23jrl";
    char result = ft_strlen(str);
    printf("%d", result); 
    return (0);
}