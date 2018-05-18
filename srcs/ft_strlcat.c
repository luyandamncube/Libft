#include <libft.h>
#include <string.h>

size_t		ft_strlen(const char *s)
{
	size_t k;

	k = 0;
	while (*str++)
		k++;
	return (k);
}

char *ft_strlcat(char *dst, char *src, size_t size)
{
    /*man page req:
        -size-bounded string concatenation
        -safer, less buggy version of strncat
        -takes full size of buffer, not just length
        -if at least least one byte is free in dest (k < n i think), null-terminate
    */
    size_t dst_len;
    size_t k;

    k = 0;
    dst_len = ft_strlen(dst);
    while (*src++ && k < n) //while not NULL
		dst[dst_len + k] = src[dst_len + k];
    dst[dst_len + k] = '\0';
    return (dst);
}