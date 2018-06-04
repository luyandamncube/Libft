/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmncube <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/03 14:44:23 by lmncube           #+#    #+#             */
/*   Updated: 2018/06/03 14:47:32 by lmncube          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char  *nptr)
{
	/*man page req:
	  -convert string to an integer (ascii to int)
	  -atoi does not detect errors
ORDER: 
1 - Check escape characters
2 - Check sign
3 - Check prefix zeros
4 - Number conversion
5 - Check largest integer bounds
NOTE : Check ft_strtrim.c. might be better to use an ft_whitespace static function
*/

	int k;
	int sign;
	int result;

	k = 0;
	result = 0;
	sign = 1;
	//32 == ' ', 9-13 are escape characters. skip ahead of all of these
	while (nptr[k] == 32 || (nptr[k] >= 9 && nptr[k] <= 13)) 
		k++;	
	//Consider expression sign. Skip ahead of sign afterwards
	if (nptr[k] == '-' || nptr[k] == '+')
	{
		if (nptr[k] == '-')
			sign = -1;
		k++;
	}
	//Skip ahead of prefix zeros 
	while (nptr[k] == '0')
	{
		k++;
	}
	//Number conversion algorithm where '0' = 48 (e.g. 6 = 54 - 48 or '6' - '0')
	while (nptr[k] != '\0' && (nptr[k] >= '0' &&  nptr[k] <= '9'))
	{
		result = result *10 + (nptr[k] - '0');
		k++;
	}
	//Check over long min & max
	
	//Check largest integer bounds
	if (k <= 10 || result <= 2147483647 || result >= -2147483648)
		return(sign*result);
	return(0);
}
