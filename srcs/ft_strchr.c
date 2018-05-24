#include "libft.h"

char    *ft_strchr(const char *s, int c)
{
    /* man page req:
        -locate char in string
        -returns a pointer to FIRST occurence of the character in the string
        -basically returns everything after and including the character
        
    */
    int k, m,flag, len;
    char str_new;
   
    k = 0;
    m = 0;
    flag = 0;
    while (*s++)
    {
        if (s[k] == c && flag == 0)
            flag = 1;
        else
            k++;
    }
    if (flag == 1) // if found
    {
        len = ft_strlen(s)-k;
        str_new = (char*)malloc(sizeof(char)*len+1);
        while (k < len)
        {
            str_new[m] = s[k];
            m++;
            k++;
        }
        str_new[m] = '\0';
    }
}