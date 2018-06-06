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
	/*
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
		if (s[i- 1] == (unsigned char)c)
			return ((void*)&dst[i]);
	}
	return (NULL);
*/
/*
	size_t		k;
	unsigned char *src_mem;
	unsigned char *dst_mem;

	k = 0;
	src_mem = src;
	dst_mem = dst;
	while (k < n)
	{
		dst_mem[k] = src_mem[k];
		k++;
		if ((src_mem[i-1] == (unsigned char)c)
			return(*dst_mem);
		k++;
	}
	return(NULL);
	*/
/*
	size_t	i;

	i = -1;
	while (++i < n)
	{
		*(char *)dst++ = *(char *)src;
		if (*(char *)src++ == c)
			return (dst);
	}
	return (NULL);
*/
	size_t i;

	i = 0;
	while (i < n)
	{
		*((unsigned char *)dst + i) = *((unsigned char *)src + i);
		if (*((unsigned char *)src + i) == (unsigned char)c)					//if statements do not inc/dec pointers!!
			return ((unsigned char *)(dst + i + 1));					//return pointer to character AFTER c 
		i++;
	}
	return (NULL);
}
