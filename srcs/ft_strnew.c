#include "libft.h"

char				*ft_strnew(size_t size)
{
    /*man page req:
        - allocates (with malloc(3)) and returns a “fresh” string ending with ’\0’. 
        - each character of the string is initialized at’\0’. 
        - if the allocation fails the function returns NULL.
    */
   char * new_str;
   size_t k;

   k = 0;
   new_str = (char *)malloc(sizeof(char)*size+1);
   if (new_str == NULL || size == 0)
        return (NULL);
   while (new_str[k])
   {
       new_str[k] = '\0';
       k++;
   }
   return(new_str);
}