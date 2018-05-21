#include <libft.h>

char *ft_strstr(const char *haystack, const char *needle)
{
    /* man page req:
        -locate a substring
        -needle will be substring, haystack is string           
        -return haystack if needle == ''
        -return NULL if needle does not occur
    */
    while (*haystack++)
    {
        int i = 0;
        int a1[127] = {0};
        int a2[127] = {0};
        
        while (s1[i])
            a1[s1[i++]]++;
        i = 0;
        while (s2[i])
            a2[s2[i++]]++;
        i = 0;
        while (i < ft_strlen(s1))
        {
            if (a1[s1[i]] <= a2[s1[i]])
                i++;
            else
                break;
        }
        if (i == ft_strlen(s1))
            write(1, s1, ft_strlen(s1));
    }
}