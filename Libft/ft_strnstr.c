#include <string.h>

char *ft_strnstr(const char *s1, const char *s2, size_t len)
{
    size_t i;
    size_t j;

    i = 0;
    if (*s2 == '\0' || s2 == NULL)
        return ((char *)s1);
    while (s1[i] != '\0' && i < len)
    {
        j = 0;
        while (s2[j] == s1[i + j] && i + j < len)
        {
            if (s2[j + i] == '\0')
                return ((char *)s1 + i);
            j++;
        }
        i++;
    }
    return (NULL);
}