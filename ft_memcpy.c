#include <libft.h>
#include <stdlib.h>
#include <string.h>

void    *ft_memcpy(void *dst, const void *src, size_t n)
{
    /*man page req:
        -copy n bytes from memory area src to memory area dst
        -if they overlap, behavior is undefined
        -limit memory created to n
        -src should have it's own memory allocated? stack for STATIC
    */

   size_t k;
   
   k = 0;
   //dst is not const, able to allocate memory for it

   //no need to cast to void, pointer type will be safely promoted 
   void dst_new = (void*)malloc(sizeof(void)) * n;
   while (k < n)
   {
       dst_new[k] = src[k];
       k++;
   }   
   return (dst_new);
}