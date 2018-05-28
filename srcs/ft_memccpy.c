#include "libft.h"
#include <stdlib.h>
#include <string.h>

void    *ft_memccpy(void *dst, const void *src, int c, size_t n)
{
    /*
    man page req:
        -copy memory area
        -copies no more than n bytes, stopping when the character c is found
        -memory areas might overlap, results for this are undefined
    */
   size_t k;
   size_t *dest_mem;
   size_t *src_mem;

   k = 0;
   dest_mem = dst;                          //Point to same mem area as dst.
   src_mem = src;                           //Point to same mem area as src.
   while (k < n && src_mem[k] != c)
    {
        dest_mem[k] = src_mem[k];           //Replace values in dest with src (until c is found)
        k++;
    }
    return(dest_mem);
}