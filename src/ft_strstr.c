#include "libft.h"

char		*ft_strstr(const char *needle, const char *haystack)
{
    int				i;
	int				find_index;
	int				remember;

	find_index = 0;
	i = 0;
	if (needle[0] == '\0')
		return ((char*)&haystack[0]);
	while (haystack[i] != '\0')
	{
		if (haystack[i] == needle[find_index])
		{
			remember = i;
			while (haystack[i] == needle[find_index])
			{
				if (needle[find_index++ + 1] == '\0')
					return ((char*)&haystack[remember]);
				i++;
			}
			find_index = 0;
			i = remember;
		}
		i++;
	}
	return (0);
}