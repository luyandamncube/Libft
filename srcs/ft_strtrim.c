#include "libft.h"

static int	ft_iswhitespace(char c)
{
	if (c == ' ' || c == '\t' || c == '\n')
		return (1);
	return (0);
}

char				*ft_strtrim(const char *s)
{
    /*
        man req:
            - Allocates (with malloc(3)) and returns a copy of the string given as argument without whitespaces 
            at the beginning or at the end of the string. Will be considered as whitespaces the following characters ’
             ’, ’\n’ and ’\t’. If s has no whites- paces at the beginning or at the end, the function returns a copy of s. 
            - If the allocation fails the function returns NULL.
    */

   size_t len;
   size_t ws_count;
   size_t chr_count;
   size_t k;
   char *s_mem;

   k = 0;
   len = 0;
   ws_count = 0;
   //sum whitespaces to ws_count
   while(s[len])
   {
      if (ft_iswhitespace(s[len]))
         ws_count++;
      len++;
   }
   chr_count = len - ws_count;
   s_mem = (char*)malloc(sizeof(char)*(chr_count));
   if (len == 0 || s_mem == NULL)
        return(NULL);
   
   while (k < chr_count)
   {
        if (!ft_iswhitespace(s[k]))
        {
            s_mem[k] = s;
            s++;
        }
        k++;
   }
}