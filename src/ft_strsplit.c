#include "libft.h"

static int			ft_analyzer(const char *s, char c)
{
	unsigned int	res;

	res = 0;
	while (s && *s)
	{
		while (*s && *s == c)
			s++;
		if (*s && *s != c)
		{
			while (*s && *s != c)
				s++;
			res++;
		}
	}
	return (res);
}

size_t	ft_strclen(const char *s, char c)
{
	size_t	res;

	res = 0;
	if (!s || !*s)
		return (res);
	while (*s && *s != c)
	{
		res++;
		s++;
	}
	return (res);
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
	char			**res;
	int				size;
	int				it;

	it = 0;
	size = ft_analyzer(s, c);
	res = (char**)malloc(sizeof(char*) * size + 1);
	if (!res || !s)
		return (NULL);
	while (it < size)
	{
		while (*s && *s == c)
			s++;
		res[it] = ft_strsub(s, 0, ft_strclen(s, c));
		if (!res[it])
			return (NULL);
		while (*s && *s != c)
			s++;
		it++;
	}
	return (res);

}