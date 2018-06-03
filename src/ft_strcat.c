#include "libft.h"

char    *ft_strcat(char *dest, char *src)
{
	/*man page req:
	  - concatenate two strings
	  - overwrites null-terminator at end of dst
	  - adds a terminating null byte to dest afterwards
	  - strings may not overlap
	  - UNSAFE: if dst is not large enough, behavior is unpredictable (buffer overrun)
	  */
	unsigned int	i;
	unsigned int	j;

	j = 0;
	i = 0;
	while (dest[j])
		j++;
	while (src[i])
		dest[j++] = src[i++];
	dest[j] = '\0';
	return (dest);
}
