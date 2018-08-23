/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmncube <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/03 16:46:18 by lmncube           #+#    #+#             */
/*   Updated: 2018/06/14 16:49:24 by lmncube          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *hay, const char *need)
{
	int		i;
	int		j;
	char	*hay_mem;

	hay_mem = (char *)hay;
	i = 0;
	if (!*need)
		return (hay_mem);
	while (hay_mem[i])
	{
		j = 0;
		while (need[j] == hay_mem[i + j])
		{
			j++;
			if (!need[j])
				return (hay_mem + i);
		}
		i++;
	}
	return (NULL);
}
