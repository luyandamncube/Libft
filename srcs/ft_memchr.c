#include "libft.h"

void    *memchr(const void *s, int c , size_t n)
{
    /* man page req:
        - scan memory for character
		- memory area is interpreted as unsigned char
        HOW TO RETURN A POINTER TO A SPECIFIC LOCATION OF AN ARRAY
            1 assign a pointer to the array in memory
            2 increment the pointer to the position you need 
    */
   size_t k;
   unsigned char *s_mem;					//memory area interpreted as unsigned char					

   s_mem = (unsigned char*)s;
   k = 0;
   while(*s_mem)
   {
	   if (s_mem[k] == c)
	       return (s_mem);				    //HOW DO I RETURN THE POINTER FOR s[k]???
	   s_mem++;
   }
   return(NULL);
}