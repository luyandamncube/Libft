/**************************************************
 * File Name : ft_strcpy.c
 * Creation Date : 22-02-2018
 * Last Modified : Thu 22 Feb 2018 04:43:03 PM SAST
 * Created By :		lmncube
 * https://github.com/luyandamncube
 **************************************************/
#include "libft.h"

char	*ft_strcpy(char *dst, char *src)
{
	int k;

	k = 0;
	while (*src)
	{
		dst[k] = src[k];
		k++;
	}
	dst[k] = '\0';
	return (dst);
}	
