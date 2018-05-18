#include <libft.h>
#include <stdlib.h>

size_t		ft_strlen(const char *s)
{
	size_t k;

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