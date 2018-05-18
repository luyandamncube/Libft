#include <stdlib.h>

int	ft_strlen(char *str)
{
	int k;

	k = 0;
	while (*str++)
		k++;
	return (k);
}

char *strdup(const char *s)
{
    int len;
    char *str;
    len = ft_strlen(s);
    str = (char*)malloc(len);
    str = s;
    return (str);
}