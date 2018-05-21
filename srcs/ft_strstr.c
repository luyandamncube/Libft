#include <libft.h>

char    *ft_strstr(const char *haystack, const char *needle)
{
    /* man page req:
        -locate a substring
        -needle will be substring, haystack is string           
        -return haystack if needle == ''
        -return NULL if needle does not occur
    */

    size_t k;
    size_t needle_len;

    k = 0;
    needle_len = ft_strlen(needle);
    
    while (*haystack++)
    {
        
    }
}