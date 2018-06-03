#include "libft.h"

char				*ft_strtrim(const char *s)
{
    /*
        man req:
            - Allocates (with malloc(3)) and returns a copy of the string given as argument without whitespaces 
            at the beginning or at the end of the string. Will be considered as whitespaces the following characters ’
             ’, ’\n’ and ’\t’. If s has no whites- paces at the beginning or at the end, the function returns a copy of s. 
            - If the allocation fails the function returns NULL.
        WRONG: NEEDS TO BE AT BEGINNING AND END OF STRING
    */
	int		i;
	int		j;
	char	*new;

	if (!s)
		return (NULL);
	i = 0;
	while (*s == ' ' || *s == '\n' || *s == '\t')
		s++;
	i = ft_strlen(s) - 1;
	if (i == -1)
		return (ft_strnew(0));
	while (!s[i] || s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
		i--;
	new = ft_strnew(++i);
	if (!new)
		return (NULL);
	j = i;
	i = 0;
	while (i < j)
	{
		new[i] = s[i];
		i++;
	}
	return (new);
}