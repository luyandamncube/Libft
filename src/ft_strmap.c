#include "libft.h"

char				*ft_strmap(const char *s, char (*f)(char))
{
    /*
        man page req:
            - Applies the function f to each character of the string given as argument to create a 
            “fresh” new string (with malloc(3)) resulting from the successive applications of f
    */
   size_t k,m;
   char *s_mem;
   char *new_mem;

   k = 0;
   m = 0;
   s_mem = (char*)s;

   while(s_mem[k])
      k++;
   new_mem = (char*)malloc(sizeof(char)*k +1);

   while(new_mem[m])
   {
       new_mem[m] = f(s_mem[m]);
       m++;
   }
   new_mem[m] = '\0';
   return(new_mem);

}