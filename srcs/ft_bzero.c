#include "libft.h"

void    ft_bzero(void *s , size_t n)
{
    /*
        man page req:
        - sets first n bytes of the area starting at s to zero
        - basically fills an array starting from the pointer, to 0
        - when dealing with void data type, remember to cast (explicit or implictit)
        TO ACCESS THE AREA OF MEMORY POINTED TO BY *s:
            1 you need to create a pointer and assign it the value of *s
            2 Assign zero values to each block 
       - memory area is interpreted as unsigned char
    */
   size_t k;
   size_t *new_ptr;

   new_ptr = s;                 //Point to same mem area as s.

   k = 0;
   while (k < n)
   {
       new_ptr[k] = 0u;         //Replace values to 0.

       k++;
   }
}