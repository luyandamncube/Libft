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
   size_t k,m;

   k = 0;
   m = 0;
   if (*s == NULL)
        return(NULL);
   while (s[m])
        m++;
   while (*s && *s != c)
   {
        s++;
        k++;
   }
    if (k > 0)
        return (s);
    if (m == k)
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