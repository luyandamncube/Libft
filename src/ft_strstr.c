/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmncube <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/03 16:46:18 by lmncube           #+#    #+#             */
/*   Updated: 2018/06/03 16:46:24 by lmncube          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strstr(const char *haystack, const char *needle)
{
	/* man page req:
	   -locate a substring
	   -needle will be substring, haystack is string           
	   -return haystack if needle == ''
	   -return NULL if haystack == ''
	   -return NULL if needle does not occur
	   -return pointer to beginning of needle if found
	   NOTE: naive approach, logic is 
	   		set limit = hay_len - need_len
			while i < limit
				while need_len
					if need[i] != hay[i+j]
						break;
	   NOTE: empty string is !needle[k], NOT needle == NULL 
	   */
	int		i;
	int		j;
	char	*hay_mem;

	hay_mem = (char *)haystack;
	i = 0;
	if (!*needle)
		return (hay_mem);
	while (hay_mem[i])
	{
		j = 0;
		while (needle[j] == hay_mem[i + j])
		{
			j++;
			if (!needle[j])
				return (hay_mem + i);
		}
		i++;
	}
	return (NULL);

}
