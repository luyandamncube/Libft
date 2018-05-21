#include <libft.h>
#include <string.h>

size_t  strlcat(char *dst, const char *src, size_t size)
{
    /* man page req:
        -size-bounded string concatenation
        -safer, less buggy version of strncat
        -if at least least one byte is free in dest (k < n i think), null-terminate
        -returns buffer size: initial length of dst + length of src
        NOTE: size_t is actually an unsigned int
        NOTE: size of dst should be: length of dest - 1
    */
    
    //Lengths should be POSITIVE, thus unsigned is warranted
    unsigned int dst_len, src_len, len;
    int k, m;

    k = 0;
    m = 0;
    dst_len = ft_strlen(dst);
    src_len = ft_strlen(src);
    len = size;

    //while size != 0 && dst != '\0'
    //if size == 0
    //while src != '\0' (concatenate)
    if (len == 0)
          
    while (*src++ && k < n) //while not NULL
    {
        dst[dst_len + k] = src[dst_len + k];
        k++;
    }
		
    dst[dst_len + k] = '\0';
    //return (dst);

    /*
	int i; length of src size
	int j;
	int src_size;
	int dst_size; length of dst WITHOUT '\0'
	int space_left; first size, then size - dst (without '\0')

	i = 0;
	dst_size = 0;
	space_left = size;
    // Check length of src
        while (src[i] != '\0')
            i++;
        src_size = i;
    // Check length of dst    
	while (dst[dst_size] != '\0' && space_left-- != 0)
		dst_size++;

    //if size entered not equal to space remaining
	space_left = size - dst_size;
	if (space_left == 0)
		return ((size_t)(size + src_size));

    //Concatenate strings   
	i = 0;
	j = dst_size;
	while (src[i] != 0 && space_left-- > 1)
		dst[j++] = src[i++];
	dst[j] = '\0';
	return ((size_t)(src_size + dst_size));
    */
}