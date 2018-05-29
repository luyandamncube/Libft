#include "libft.h"

char    *ft_strrchr(const char *s, int c)
{
    /* man page req:
        -locate char in string
        -returns a pointer to LAST occurence of the character in the string
       HOW TO RETURN A POINTER TO A SPECIFIC LOCATION OF AN ARRAY
            1 assign a pointer to the array in memory
            2 increment the pointer to the position you need 
              
    */
   size_t k,m;
   char *s_mem;

   k = 0;
   m = 0;
   s_mem = (char*)s;
   if (s_mem == NULL)
        return(NULL);
   while(*s)
    k++;
   while(k >= 0)
   {
	   if (s_mem[k] == c)
	       return (s_mem);				    
	   s_mem--;
       k--;
   }
   return(NULL);
}    
