/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmncube <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/03 16:39:43 by lmncube           #+#    #+#             */
/*   Updated: 2018/06/03 16:39:46 by lmncube          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int               ft_memcmp(const void *s1, const void *s2 , size_t n)
{
	/*
	   man page req:
	   - compare memory areas
	   - compares first n bytes of s1 and s2
	   - memory area is interpreted as unsigned char
	   */
	size_t k;
	unsigned char *s1_mem, *s2_mem;

	s1_mem = (unsigned char*)s1;                        //memory area interpreted as unsigned char
	s2_mem = (unsigned char*)s2;
	k = 0;
	while (k < n)
	{
		if (s1_mem[k] != s2_mem[k])
			return(s1_mem[k] - s2_mem[k]);
		k++;
	}
	return(0);
}
