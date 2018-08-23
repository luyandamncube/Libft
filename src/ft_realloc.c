/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_realloc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmncube <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/21 11:37:24 by lmncube           #+#    #+#             */
/*   Updated: 2018/06/21 11:55:22 by lmncube          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_realloc(void *ptr, size_t size)
{
	void	*new;

	if (!ptr || size == 0)
		return (NULL);
	if (NULL == (new = malloc(sizeof(size_t) * size)))
		return (NULL);
	ft_memcpy(new, ptr, size);
	ft_memdel(&ptr);
	return (new);
}
