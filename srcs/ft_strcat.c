#include "libft.h"

char    *ft_strcat(char *dest, char *src)
{
    /*man page req:
        - concatenate two strings
        - overwrites null-terminator at end of dst
        - adds a terminating null byte to dest afterwards
        - strings may not overlap
        - UNSAFE: if dst is not large enough, behavior is unpredictable (buffer overrun)
    */
    size_t k,m;

    k = 0;
    m = 0;
    while (dest[k]) //while not NULL
       k++;
	while (src[m])
    {
        dest[k] = src[m];
        k++;
        m++;
    }
    dest[m+k] = '\0';
    return (dest);
}