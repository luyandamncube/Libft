#include "libft.h"

void    *ft_memcpy(void *dest, const void *src, size_t n)
{
    /* man page req:
        - copies n bytes from memory area src to memory area dest
        - the memory areas may NOT overlap
        - memory area is interpreted as unsigned char
        - returns a apointer to dest
    */

   size_t k;
   size_t *new_mem;
   size_t *src_mem;

   k = 0;
   //new_mem = (size_t*)malloc(sizeof(size_t)*n+1);     //Might not be allowed to malloc here...
   new_mem = (size_t*)dest;                             //Point dst to a newly created mem area.
   src_mem = (size_t*)src;                              //Point to same mem area as src.

   while (k < n)
   {
       new_mem[k] = src_mem[k];                         //Replace values in dest with src.
       k++;
   }   
   return (new_mem);
}