#include "libft.h"

void				ft_strdel(char **as)
{
    /*
    man page req:
    - Takes as a parameter the address of a string that need to be freed with free(3), 
    - then sets its pointer to NULL.

    NOTE: ** as denotes a parameter that is allowed to have its value changed by the function (pass by reference)
    */
   char *mem_ptr;

   mem_ptr = *as;
   /*if (mem_ptr == NULL)
        return*/
   free(mem_ptr);
   mem_ptr = NULL;                  //Could use ft_memdel here, same logic
}