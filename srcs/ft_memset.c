#include "libft.h"

void    *ft_memset(void * s, int c, size_t n)
{
    /*
        man page req:
        - sets first n bytes of the area starting at s to constant byte c
        - basically fills an array starting from the pointer, to 0
        - when dealing with void data type, remember to cast (explicit or implictit)
    */
   size_t k;
   size_t *new_ptr;

   new_ptr = (size_t*)s;                         //Point to same mem area as s.

   k = 0;
   while (k < n)
   {
       new_ptr[k] = c;                          //Replace values to c
       k++;
   }
   return(new_ptr);
}