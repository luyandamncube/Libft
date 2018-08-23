/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmncube <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/03 16:44:49 by lmncube           #+#    #+#             */
/*   Updated: 2018/06/11 10:37:12 by lmncube          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *dest, const char *src, size_t n)
{
	size_t	k;
	size_t	m;

	k = 0;
	m = ft_strlen(dest);
	while (src[k] && k < n)
		dest[m++] = src[k++];
	dest[m] = '\0';
	return (dest);
}
