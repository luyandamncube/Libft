/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmncube <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/03 16:02:46 by lmncube           #+#    #+#             */
/*   Updated: 2018/06/03 16:15:46 by lmncube          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_memmove(void * dest, const void *src,  size_t n)
{
	/*
	   man page req:
	   - copies n bytes from memory area src to memory area dest
	   - the memory areas may overlap
	   - memory area is interpreted as unsigned char
	   LOGIC
	   1 malloc area as size of len (buff, temp)
	   2 copy s2 to temp
	   3 copy buff to s1
	   4 return s1
	   */
	char	*srcc;
	char	*dstc;
	size_t	i;

	i = -1;
	srcc = (char *)src;
	dstc = (char *)dest;
	if (srcc < dstc)
		while ((int)(--n) >= 0)
			*(dstc + n) = *(srcc + n);
	else
		while (++i < n)
			*(dstc + i) = *(srcc + i);
	return (dest);
}
