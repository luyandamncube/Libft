#include "libft.h"
#include <string.h>

int     ft_strncmp(const char *s2, const char *s1, size_t n)
{
	/*man page req:
        -compare two strings
        -finds if s1 is less than, mathces or is greater than s2
        -compares the first n byes of s1 and s2
        -performs binary comparison of characters
    */
    size_t k;

    k = 0; 
    while(*s1++ && s1[k] == s2[k] && k < n) 
        k++;
    return(s1[k]-s2[k]);       
}