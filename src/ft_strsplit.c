/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmncube <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/03 16:46:05 by lmncube           #+#    #+#             */
/*   Updated: 2018/06/15 11:57:55 by lmncube          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		**ft_strsplit(const char *s, char c)
{
	char	**res;
	int		size;
	int		it;

	it = 0;
	size = ft_isdelimiter(s, c);
	res = (char**)malloc(sizeof(char*) * size + 1);
	if (!res || !s)
		return (NULL);
	while (it < size)
	{
		while (*s && *s == c)
			s++;
		res[it] = ft_strsub(s, 0, ft_strclen(s, c));
		if (!res[it])
			return (NULL);
		while (*s && *s != c)
			s++;
		it++;
	}
	res[it] = 0;
	return (res);
}
