#include "libft.h"

void				ft_memdel(void **ap)
{
    /*
    man page req:
    - Takes as a parameter the address of a memory area that needs
        to be freed with free(3), then puts the pointer to NULL

    NOTE: ** ap denotes a parameter that is allowed to have its value changed by the function (pass by reference)
    */
   size_t mem_ptr;
   
   mem_ptr = (size_t)*ap;
   free(*ap);
   //mem_ptr = NULL;
}