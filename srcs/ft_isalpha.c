#include "libft.h"

int     ft_isalpha(int c)
{
    //Needs to be isupper||islower
    if(c >= 'A' && c <= 'z')
        return (1);
    return (0);
}