#include <libft.h>

char    *ft_strnstr(const char *haystack, const char *needle, size_t len);
{
    /* man page req:
        -locate a substring
        -needle will be substring, haystack is string           
        -return haystack if needle == ''
        -return NULL if needle does not occur
    */

    size_t k, m;
    size_t needle_len;

    k = 0;
    m = 0;
    needle_len = ft_strlen(needle);
    
    /*
        x   get needle length
        -iterate through haystack ,char by char
        -check if char matches first char of needle
        -iterate through needle to see if all chars match, add to counter
        -if counter == needle_len, then return needle
    */

    while (haystack[k] != '\0')
    {
        while (needle[m] < size)
        {
            if (haystack[k] == needle[m])
                checker++;
            m++;
        }

        k++;
    }
    if (checker == size)
        return (needle);
}