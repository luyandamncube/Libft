/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmncube <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/03 16:44:17 by lmncube           #+#    #+#             */
/*   Updated: 2018/06/11 10:35:31 by lmncube          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	size_t		size;
	size_t		i;
	char		*out;

	if (s)
	{
		size = ft_strlen(s);
		if (NULL == (out = malloc(sizeof(char) * size + 1)))
			return (NULL);
		i = -1;
		while (++i < size)
			out[i] = (*f)(s[i]);
		out[i] = '\0';
		return (out);
	}
	return (NULL);
}
