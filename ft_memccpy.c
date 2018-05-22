#include <libft.h>
#include <stdlib.h>
#include <string.h>

void    *ft_memccpy(void *dst, const void *src, int c, size_t n);
{
    /*man page req:
        -copies bytes from string src to string dst.  
        -If the character c (as converted to an unsigned char) occurs in the string src, 
        the copy stops and a pointer to the byte after the copy of c in the string dst is returned.  
        -Otherwise, n bytes are copied, and a NULL pointer is returned.
        "copy everything until c is found OR copy ""

    */

   size_t len, mem_size;
   size_t k, m;
   char src_new;

   mem_size = sizeof(n);
   char_flag = (unsigned char*)c;
   k = 0;
   m = 0;
   len = ft_strlen(src);

    //Find position of c
    while (len > 0)
    {
        if (s[k] == c && flag == 0)
        {
            flag = 1;
            k = len;
        }
            
        else
            len--;
    }

    new_pos = (k > n) ? k : n; 
    src_new = (char*)malloc(sizeof(char) * k + 1);
    while (src_new[m] < k)
    {
        src_new[m] = src[m];
        dst[m] = src[m];
        m++;
    }
    src_new[k] = '\0';
    return (src_new);
   /*
    -find length of n
    -convert/cast c to unsigned char
    -iterate through src till you find c
    -new_src is everything until c 
    -if found: allocate memory for new_src
    -if not found : allocate n space in memory
    -add null-terminator to space
    -return memspace 
   */

}