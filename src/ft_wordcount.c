/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_wordcount.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmncube <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/10 09:48:04 by lmncube           #+#    #+#             */
/*   Updated: 2018/09/19 14:07:54 by lmncube          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_wordcount(const char *str)
{
	int		count;
	int		i;
	int		len;
	char	last;

	count = 0;
	i = -1;
	len = ft_strlen(str);
	if (len > 0)
		last = str[0];
	while (++i < len)
	{
		if ((str[i] == ' ' || str[i] == '\0') && last != ' ')
			count++;
		last = str[i];
	}
	return (count);
}
