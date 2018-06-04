/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmncube <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/03 14:54:53 by lmncube           #+#    #+#             */
/*   Updated: 2018/06/03 16:20:17 by lmncube          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int     ft_strcmp(const char *s2, const char *s1)
{
	/*man page req:
	  -compare two strings
	  -finds if s1 is less than, mathces or is greater than s2
	  -performs binary comparison of characters
NOTE:
>Theoretically you could have then negetive integers as paramaters
>remember that char is INTEGER. it's just the smallest integer type. 
>e.g. 0xFF and FF are the same. as a char it is -1 but unsigned it is 255
>"values in memory may be the same although the bits used to represent them might differ"
>ANY time we subtract/add integers, make sure to check if you should use unsigned
*/
	unsigned char	*s1_ptr;
	unsigned char	*s2_ptr;
	int				i;

	s1_ptr = (unsigned char*)s1;
	s2_ptr = (unsigned char*)s2;
	i = 0;
	while (s1[i] && s1_ptr[i] == s2_ptr[i])
		i++;
	return (s2_ptr[i] - s1_ptr[i]);
}
