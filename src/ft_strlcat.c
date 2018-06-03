/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmncube <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/03 16:43:38 by lmncube           #+#    #+#             */
/*   Updated: 2018/06/03 16:43:40 by lmncube          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t  ft_strlcat(char *dst, const char *src, size_t size)
{
	/* man page req:
	   - size-bounded string concatenation
	   - safer, less buggy version of strncat
	   - It will append at most size - strlen(dst) - 1 bytes
	   - returns the total length of the string they tried to create
	   1) if at least least one byte is free in dest, null-terminate
	   2) returns buffer size: initial length of dst + length of src

*/

	size_t k, m;
	size_t mem_size;
	k = 0;
	m = 0;
	mem_size = 0;
	while (dst[m])
		m++;
	while (src[k] && k < size)
	{
		dst[m] = src[k];
		m++;
		k++;
	}
	dst[k-1] = '\0';
	if (m < size)
		return(k+m);                    //What is expected output?? Should be maybe if (m+k < size)
	else
		return(k+size);                 //What is expected output??
}
