#include "libft.h"

char    *ft_strncat(char *dst, char *src, size_t n)
{
    /*man page req:
        -string n concatenate
        -similar to strcat, although does not need to be null terminated if has n or more bytes
        1) if at least least one byte is free in dest (k < n i think), null-terminate
        NOTE: size_t stores size of data objects in C
        NOTE: size_t is actuALLY an unsigned int
    */

   //Lengths should be POSITIVE, thus unsigned is warranted
    unsigned int k,m;

    k = 0;
    m = ft_strlen(dst);
    //Move to end position of dst
    while (*src++ && k < n) //while not NULL
    {
        dst[m] = src[k];
        k++;
        m++;
    }
    dst[m] = '\0';
    return (dst);
}