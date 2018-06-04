/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmncube <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/03 16:45:44 by lmncube           #+#    #+#             */
/*   Updated: 2018/06/03 16:45:51 by lmncube          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//FIX ME :(
char    *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	/* man page req:
	   -locate a substring
	   -needle will be substring, haystack is string           
	   -return haystack if needle == ''
	   -return NULL if needle does not occur
	   -return pointer to beginning of needle if found
	   NOTE: naive approach, 
	   */

	int 		k;
	int 		m;
	int 		limit;
	int 		need_len;
	int			hay_len;

	k = 0;
	m = 0;
	need_len = ft_strlen(needle);
	hay_len = ft_strlen(haystack);
	limit = need_len + hay_len;
	if(needle == NULL || needle[0] == '\0')
		return(NULL);
		
	while(k < limit)
	{
		while(m < need_len)
		{
			if(needle[m] != haystack[m+k])
				break;
			m++;
		}
		k++;
	}
	if (m == need_len)
		return((char*)needle);
	else
		return(NULL);
}
