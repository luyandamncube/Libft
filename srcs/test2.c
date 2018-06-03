/* C/C++ program to count no of words from given input string. */
#include <stdio.h>
 
int	ft_iswhitespace(char c)
{
	if (c == ' ' || c == '\t' || c == '\n')
		return (1);
	return (0);
}

unsigned ft_wordcount(char *str)
{
    int flag = 0;
    unsigned wc = 0;  

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

int main(void)
{
    char str[] = "One two         three\n    four\tfive  six";
    printf("No of words : %u", ft_wordcount(str));
    return 0;
}