#include "libft.h"

char *ft_strtrim(char const *s1, char const *set)
{
    char *str;
    size_t i;
    size_t j;

    i = 0;
    j = 0;
    if (!s1)
        return (NULL);
    str = malloc((ft_strlen(s1) + 1) * sizeof(char));
    if (!str)
        return (NULL);
    while (s1[i] != '\0')
    {
        if (s1[i] == set)
        str[i] = s1[i];
        i++;
    }
    str[i + j] = '\0';
    return (str)
}