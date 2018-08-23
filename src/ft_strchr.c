/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmncube <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/03 16:15:55 by lmncube           #+#    #+#             */
/*   Updated: 2018/06/11 09:58:44 by lmncube          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		k;
	int		m;

	k = 0;
	m = 0;
	k = ft_strlen(s);
	if (s[k] == (char)c)
		return ((char*)&s[k]);
	k++;
	while (m < k)
	{
		if (s[m] == (char)c)
			return ((char*)&s[m]);
		m++;
	}
	return (NULL);
}
