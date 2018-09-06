/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isnum.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmncube <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/24 14:57:07 by lmncube           #+#    #+#             */
/*   Updated: 2018/09/06 11:32:35 by lmncube          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isint(char *in)
{
	int		len;
	char	str_int[11];
	int		sign;
	int		i;

	sign = 0;
	if (*in == '-')
		sign = 1;
	ft_strcpy(str_int, "2147483647");
	str_int[9] += sign;
	len = ft_strlen(in + sign);
	if (len > 10)
		return (0);
	if (len < 10)
		return (1);
	i = sign - 1;
	while (in[++i])
	{
		if (in[i] > str_int[i - sign])
			return (0);
	}
	return (1);
}

int		ft_isnum(char *str)
{
	int		k;

	k = 0;
	if (!ft_isint(str))
		return (0);
	if (str[k] == '-')
		k++;
	while (str[k])
	{
		if (!ft_isdigit(str[k]))
			return (0);
		k++;
	}
	return (1);
}
