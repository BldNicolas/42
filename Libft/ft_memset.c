#include <string.h>

void    *ft_memset(void *str, int c, size_t n)
{
    char    *strcpy;

    strcpy = str;
    while (n)
    {
        *strcpy = (unsigned char)c;
        strcpy++;
        n--;
    }
    
    return(str);
}
