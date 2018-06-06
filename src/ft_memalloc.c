/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmncube <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/03 16:39:19 by lmncube           #+#    #+#             */
/*   Updated: 2018/06/03 16:39:31 by lmncube          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void				*ft_memalloc(size_t size)
{
	/*
	   man page req:
	   - allocates size bytes and returns a pointer to allocated memory
	   - memory is NOT initialised
	   - if size = 0, returns NULL or unique pointer that can be passed to free
	   - if mem allocation fails, returns NULL
	   */
	/*
	size_t *new_mem;

	if (size == 0)
		return (NULL);
	new_mem  = (size_t*)malloc(sizeof(size_t)*size);
	if (new_mem == NULL)
		return (NULL);
	ft_bzero(new_mem,size);
	return(new_mem)*/
	size_t 		k;
	unsigned char 	*mem;

	k = 0;
	if (size == 0)
		return(NULL);
	if (NULL == (mem = malloc(size)))
		return(NULL);
	ft_bzero(mem,size);
	return(mem);
}
