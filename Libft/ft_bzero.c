#include <string.h>

void    ft_bzero(void *str, size_t n)
{
    unsigned char   *strcpy;
    size_t  i;

    strcpy = str;
    i = 0;
    while(i++ < n)
        *strcpy++ = 0;
}