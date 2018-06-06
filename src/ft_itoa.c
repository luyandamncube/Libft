/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmncube <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/03 16:39:01 by lmncube           #+#    #+#             */
/*   Updated: 2018/06/03 16:39:05 by lmncube          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_count(int n)
{
	int		count;

	count = 1;
	if (n < 0)
		count = 2;
	while (n /= 10)
		count++;
	return (count);
}

char	*ft_itoa(int n)
{
	/*man page req:
	  - convert integer to an  string (int to ascii)
	  - itoa does not detect errors
	ORDER: [ZLMCS]
	Z - Check if zero or largest integer
	L - Check integer length				HELPER FUNCTION
	M - Allocate memory (string)			HELPER FUNCTION
	C - Number conversion
	S - Check sign
	*/
	char	*io;
	int		len;
	int		sign;

	sign = 1;
	len = ft_count(n);
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	if (n < 0)
		test2(&sign, &n);
	io = ft_strnew(len);
	if (io)
	{
		//Number conversion algorithm
		while (len > 0)
		{
			io[len - 1] = (n % 10) + '0';
			n /= 10;
			len--;
		}
		if (sign < 0)
			io[0] = '-';
	}
	return (io);
}

/*
	char	*digits;
	char	*result;
	int		nlen;
	int		i;

	digits = ft_strdup("0123456789");
	if (n == -2147483648 || n == 0)
		return (n ? ft_strdup("-2147483648") : ft_strdup("0"));
	nlen = ft_nlen(n);
	result = n < 0 ? ft_strnew(nlen + 1) : ft_strnew(nlen);
	if (!result)
		return (NULL);
	result[nlen] = n < 0 ? '-' : 0;
	n = n < 0 ? -n : n;
	i = result[0] == '-' ? 1 : 0;
	while (n)
	{
		result[i] = digits[n % 10];
		n /= 10;
		i++;
	}
	result = ft_strrev(result);
	return (result);


*/