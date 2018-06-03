#include "libft.h"

int	ft_iswhitespace(char c)
{
	if (c == ' ' || c == '\t' || c == '\n')
		return (1);
	return (0);
}

unsigned ft_wordcount(char *str)
{
    int flag;
    flag = 0;
    size_t wc;
    
    wc = 0;  
    while (*str)
    {
        if (ft_iswhitespace(*str))
            flag = 0;
        else if (flag == 0)
        {
            flag = 1;
            wc++;
        }
        ++str;
    }
    return wc;
}

char				**ft_strsplit(const char *s, char c)
{
    /*
        man req:
            - Allocates (with malloc(3)) and returns an array of “fresh” strings (all ending with ’\0’, including the array itself) 
            obtained by spliting s using the character c as a delimiter. 
            - If the allocation fails the function returns NULL. 
            Example : ft_strsplit("*hello*fellow***students*", ’*’) re- turns the array ["hello", "fellow", "students"].
    word_count
    word_size
    */
   size_t()

}