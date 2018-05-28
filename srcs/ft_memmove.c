#include "libft.h"

void    *ft_memmove(void * dest, const void *src,  size_t n)
{
/*
        man page req:
        - copies n bytes from memory area src to memory area dest
        - the memory areas may overlap
        - memory area is interpreted as unsigned char
*/
    size_t *dst_mem, * src_mem;
    size_t k;

    dst_mem = (size_t*)dest;                 //Point to same mem area as dest.
    src_mem = (size_t*)src;                  //Point to same mem area as src.
    k = 0;
    while(k < n)
    {
        dst_mem[k] = src_mem[k];    //Replace values in dest with src.
        k++;
    }
    return(dst_mem);
}