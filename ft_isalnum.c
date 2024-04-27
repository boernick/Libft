#include <unistd.h>

int ft_isalnum(char c)
{
    if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z') 
    || (c >= '0' && c <= '9'))
            return(1);
        else 
            return (0);
}