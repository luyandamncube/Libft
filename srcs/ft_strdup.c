#include "libft.h"

char    *ft_strdup(const char *s)
{
    /*man page req:
        -return ptr to string which is a duplicate of string s
        -memory for new string is obtained with "malloc", freed with "free"
        -delimit with null-terminator
        -return NULL if no space was allocated
    */
    size_t len;
    char *str;
    int k;

    len = 0;
    while(*s)
        len++;
    k = 0;
    //+1 for null-terminator
    str = (char*)malloc(sizeof(char)*len+1);
    if (!str)
        return (NULL); //return NULL if no space was allocated
    while (*s++) //while not null
    {
        str[k] = s[k];
        k++;
    }
    str[k] = '\0'; 
    return (str);
}