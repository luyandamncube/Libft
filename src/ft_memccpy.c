/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmncube <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/03 15:38:56 by lmncube           #+#    #+#             */
/*   Updated: 2018/06/03 15:43:30 by lmncube          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	/*
	   man page req:
	   -copy memory area
	   -copies no more than n bytes, stopping when the character c is found
	   -memory areas might overlap, results for this are undefined
	   */
	unsigned char	*s;
	unsigned char	*d;
	unsigned int	i;

	s = (unsigned char*)src;
	d = (unsigned char*)dst;
	i = 0;
	while (i < n)
	{
		d[i] = s[i];
		i++;
		if (s[i - 1] == (unsigned char)c)
			return ((void*)&dst[i]);
	}
	return (NULL);
}
