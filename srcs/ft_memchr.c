#include "libft.h"

void    *memchr(const void *s, int c , size_t n)
{
    /* man page req:
        - scan memory for character
		- memory area is interpreted as unsigned char
    */
   size_t k;
   unsigned char *s_mem;					//memory area interpreted as unsigned char					

   s_mem = (unsigned char*)s;
   k = 0;
   while(k < n)
   {
	   if (s_mem[k] == c)
	       return (&s_mem[k]);				//HOW DO I RETURN THE POINTER FOR s[k]???
	   k++;
   }
   return(NULL);
}