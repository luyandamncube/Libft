/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmncube <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/03 16:02:46 by lmncube           #+#    #+#             */
/*   Updated: 2018/06/11 09:42:33 by lmncube          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	k;

	k = 0;
	if (src < dest)
		while (n > 0)
		{
			n--;
			*(unsigned char*)(dest + n) = *(unsigned char*)(src + n);
		}
	else
		while (k < n)
		{
			*(unsigned char*)(dest + k) = *(unsigned char*)(src + k);
			k++;
		}
	return (dest);
}
