/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmncube <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/05 10:10:10 by lmncube           #+#    #+#             */
/*   Updated: 2018/06/14 16:48:43 by lmncube          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *hay, const char *need, size_t len)
{
	int		i;
	size_t	j;
	char	*hay_mem;

	hay_mem = (char *)hay;
	i = 0;
	if (!*need)
		return (hay_mem);
	while (hay_mem[i])
	{
		j = 0;
		while ((need[j] == hay_mem[i + j]) && i + j < len)
		{
			j++;
			if (!need[j])
				return (hay_mem + i);
		}
		i++;
	}
	return (NULL);
}
