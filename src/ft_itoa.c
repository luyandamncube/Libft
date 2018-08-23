/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmncube <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/03 16:39:01 by lmncube           #+#    #+#             */
/*   Updated: 2018/06/11 09:31:32 by lmncube          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_intlen(int n)
{
	int	count;

	count = 1;
	if (n < 0)
		count = 2;
	while (n /= 10)
		count++;
	return (count);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		len;
	int		neg;

	neg = n < 0 ? 1 : 0;
	len = ft_intlen(n);
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	if (neg)
		n *= -1;
	if (NULL != (str = ft_strnew(len)))
	{
		while (len > 0)
		{
			str[len - 1] = (n % 10) + 48;
			n /= 10;
			len--;
		}
		if (neg)
			str[0] = '-';
	}
	return (str);
}
