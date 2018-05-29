#include "libft.h"

char    *ft_strncat(char *dest, char *src, size_t n)
{
    /*man page req:
        -string n concatenate
        -similar to strcat, although does not need to be null terminated if has n or more bytes
        1) if at least least one byte is free in dest (k < n i think), null-terminate
        NOTE: size_t stores size of data objects in C
        NOTE: size_t is actually an unsigned int
    */

   //Lengths should be POSITIVE, thus unsigned is warranted
    size_t k,m;

    k = 0;
    m = 0;
    while (dest[m]) //while not NULL
       m++;
    //Move to end position of dst
    while (src[k] && k < n) //while not NULL
    {
        dest[m] = src[k];
        k++;
        m++;
    }
    dest[m+k] = '\0';
    return (dest);
}