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
	  -	convert string to an integer (ascii to int)
	  -	atoi does not detect errors
	  - atoi skips ahead of characters, pays no attention to errors with trailing characters
	ORDER: [ESZCL]
	E - Check escape characters				HELPER FUNCTION
	S - Check sign
	Z - Check prefix zeros
	C - Number conversion
	L - Check largest integer bounds
*/

	int k;
	int sign;
	int result;

	k = 0;
	result = 0;
	sign = 1;
	//[E] Check escape characters 9-13,32	
	while (nptr[k] == 32 || (nptr[k] >= 9 && nptr[k] <= 13)) 
		k++;	
	//[s] Check sign -/+
	if (nptr[k] == '-' || nptr[k] == '+')
	{
		if (nptr[k] == '-')
			sign = -1;
		k++;
	}
	//[Z] Check prefix zeros
	while (nptr[k] == '0')
	{
		k++;
	}
	//[C] Number conversion
	while (nptr[k] != '\0' && (nptr[k] >= '0' &&  nptr[k] <= '9'))
	{
		result = result *10 + (nptr[k] - '0');
		k++;
	}
	//[L] Check largest integer bounds
	if (k <= 10 || result <= 2147483647 || result >= -2147483648)
		return(sign*result);
	return(0);
}
