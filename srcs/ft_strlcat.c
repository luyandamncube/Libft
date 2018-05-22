#include <libft.h>
#include <string.h>

size_t  ft_strlcat(char *dst, const char *src, size_t size)
{
    /* man page req:
        -size-bounded string concatenation
        -safer, less buggy version of strncat
        1) if at least least one byte is free in dest, null-terminate
        2) returns buffer size: initial length of dst + length of src
        NOTE: size_t is actually an unsigned int
    */
    
    //Lengths should be POSITIVE, thus unsigned is warranted
    unsigned int dst_len, src_len;
    unsigned int k,m;

    k = 0;
    //Use sizeof here instead, checks full size of structure not limited to nul-terminator
    src_len = ft_strlen(src);
    dst_len = ft_strlen(dst);
    m = dst_len;
    //1) if at least least one byte is free in dest
    while (*src++ && m < size + 1) 
    {
        dst[m] = src[k];
        k++;
        m++;
    }
    dst[m] = '\0';

    if (dst_len < size)
        return (src_len + dst_len);
    else
        return (src_len + size);
}