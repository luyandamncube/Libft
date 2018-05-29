#include "libft.h"

void				*ft_memalloc(size_t size)
{
    /*
    man page req:
        - allocates size bytes and returns a pointer to allocated memory
        - memory is NOT initialised
        - if size = 0, returns NULL or unique pointer that can be passed to free
        - if mem allocation fails, returns NULL
    */
    size_t *new_mem;

    if (size = 0)
        return (NULL);
    new_mem  = (size_t*)malloc(sizeof(size_t)*size);
    if (new_mem == NULL)
        return (NULL);
    return(new_mem);
 }