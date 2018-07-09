#include "libft.h"

int					ft_wordcount(const char *str)
{
    int     count;

    count = 0;
    while (*str)
    {
        if (!ft_iswhitespace(*str) && (ft_iswhitespace(*(str + 1)) || *str == '\0'))
            count++;
        *str++;
    }
    return (count);
}