#include "libft.h"

char    *ft_strchr(const char *s, int c)
{
    /* man page req:
        -locate char in string
        -returns a pointer to FIRST occurence of the character in the string
        -basically returns everything after and including the character
        HOW TO RETURN A POINTER TO A SPECIFIC LOCATION OF AN ARRAY
            1 assign a pointer to the array in memory
            2 increment the pointer to the position you need 
        
    */
   size_t k;
   char *s_mem;

   k = 0;
   s_mem = (char*)s;
   if (s_mem == NULL)
        return(NULL);
   while(*s_mem)
   {
	   if (s_mem[k] == c)
	       return (s_mem);				    
	   s_mem++;
       k++;
   }
   return(NULL);
}       

/*
char	*ft_strchr(const char *s, int c)
{
	char	*a;

	if (!s)
		return (NULL);
	a = (char *)s;
	while (*a)
	{
		if (*a == (char)c)
			return (a);
		a++;
	}
	if (*a == (char)c)
		return (a);
	return (NULL);
}
*/