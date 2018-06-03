#include "libft.h"

char				*ft_strjoin(const char *s1, char const *s2)
{
    /*
        man req:
            - Allocates (with malloc(3)) and returns a “fresh” string end- ing with ’\0’, 
             result of the concatenation of s1 and s2. If the allocation fails the function returns NULL.
    */
   size_t k,m,n,p;
   char *s_new;

   k = 0;
   m = 0;
   n = 0;
   p = 0;
   while(s1[k])
       k++;
   while(s2[m])
       m++;
   if (!k && !m)
	return(NULL);			//Check this return value
   s_new = (char*)malloc(sizeof(char)*(k+m)+1);
   while(s1[n])
   {
	   s_new[n] = s1[n];
	   n++;
   }
   while(s2[p])
   {
	   s_new[n] = s2[p];
	   n++;
	   p++;
   }
   return (s_new);
}