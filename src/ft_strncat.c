#include "libft.h"

char    *ft_strncat(char *dest, char *src, size_t n)
{
	/*man page req:
	  -string n concatenate
	  -similar to strcat, although does not need to be null terminated if has n or more bytes
	  1) if at least least one byte is free in dest (k < n i think), null-terminate
	  */
	unsigned int	i;
	unsigned int	j;

	j = 0;
	i = 0;
	while (dest[j])
		j++;
	while (src[i] && i < n)
		dest[j++] = src[i++];
	dest[j] = '\0';
	return (dest);
}