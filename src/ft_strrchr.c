/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmncube <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/03 15:23:53 by lmncube           #+#    #+#             */
/*   Updated: 2018/06/11 10:43:27 by lmncube          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	k;

	k = (int)ft_strlen(s);
	while (k >= 0)
	{
		if (s[k] == (char)c)
			return ((char*)s + k);
		k--;
	}
	return (NULL);
}
