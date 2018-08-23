/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmncube <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/03 16:46:33 by lmncube           #+#    #+#             */
/*   Updated: 2018/06/11 10:47:59 by lmncube          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	size_t		k;
	char		*mem;

	k = 0;
	if (NULL == (mem = malloc(sizeof(char) * len + 1)))
		return (NULL);
	if (s)
	{
		while (k < len)
		{
			mem[k] = s[start + k];
			k++;
		}
	}
	mem[k] = '\0';
	return (mem);
}
