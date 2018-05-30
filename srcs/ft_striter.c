#include "libft.h"

void				ft_striter(char *s, void (*f)(char *))
{
    /*
        man page req:
            - Applies the function f to each character of the string passed as argument. 
            - Each character is passed by address to f to be modified if necessary.
            USAGE: f(next_pointer);
    */
   size_t k;
   char *s_ptr;

   s_ptr = (char*)s;
   k = 0;
   while(s_ptr[k])
   {
       f(s_ptr);
       s_ptr++;
       k++;
   }
}