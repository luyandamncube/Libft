#include "libft.h"

char    *ft_strcat(char *dst, char *src)
{
    /*man page req:
        -string concatenate
        -Need to allocate space for src, then change size of dest to match
        -dest MUST have enough space for result
        -Result string MUST be null-terminated
        -No if statement: program behavior unpredictable if dest is not big enough
        NOTE: size_t stores size of data objects in C
        NOTE: malloc for dest would be (char*)malloc(dest_len+src_len)
    */
    size_t dst_len;
    size_t k;

    dst_len = ft_strlen(dst);
    k = 0;
    while (*src++) //while not NULL
		dst[dst_len + k] = src[dst_len + k];
    dst[dst_len + k] = '\0';
    return (dst);
}