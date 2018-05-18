#include <libft.h>

int     ft_isalnum(int c)
{
    //Needs to be isalpha||isdigit
    if((c >= 'A' && c <= 'z')||(c >= '0' && c <= '9'))
        return (1);
    return (0);
}