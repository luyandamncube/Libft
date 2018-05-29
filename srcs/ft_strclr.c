#include "libft.h"

void				ft_strclr(char *s)
{
    /*man page req:
        - Sets every character of the string to the value ’\0’
    */

   char *s_mem;
   size_t k;

   s_mem = s;
   k = 0;
   while(s_mem[k])
   {
       s_mem[k] = '\0';
       k++;
   }
}