#include <libft.h>

char    *ft_strchr(const char *s, int c)
{
    /* man page req:
        -locate char in string
        -returns a pointer to LAST occurence of the character in the string
        -
              
    */
    int k, m,flag, len;
    char str_new;
   
    k = 0;
    m = 0;
    flag = 0;
    len = ft_strlen(s);
    while (len > 0)
    {
        if (s[k] == c && flag == 0)
        {
            flag = 1;
            k = len;
        }
            
        else
            len--;
    }
    if (flag == 1) // if found
    {
        //len = ft_strlen(s)-k;
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