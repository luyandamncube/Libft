/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmncube <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/03 16:46:05 by lmncube           #+#    #+#             */
/*   Updated: 2018/09/07 15:27:45 by lmncube          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		**ft_strsplit(const char *str, char c)
{
	char	**split;
	int		k;
	int		m;

	k = 0;
	m = 0;
	split = (char **)malloc(sizeof(char*) * 256);
	while (*str == c)
		str++;
	while (*str)
	{
		m = 0;
		split[k] = (char*)malloc(sizeof(char) * 4096);
		while (*str != c && *str)
		{
			split[k][m++] = *str;
			str++;
		}
		while (*str == c)
			str++;
		split[k][m] = '\0';
		k++;
	}
	split[k] = NULL;
	return (split);
}
