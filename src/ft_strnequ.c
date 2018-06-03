/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmncube <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/03 16:45:25 by lmncube           #+#    #+#             */
/*   Updated: 2018/06/03 16:45:27 by lmncube          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int				ft_strnequ(const char *s1, char const *s2, size_t n)
{
	size_t s1_len, s2_len;
	size_t k,m;

	s1_len = 0;
	s2_len = 0;
	k = 0;
	m = 0;
	while(s1[s1_len])
		s1_len++;
	while(s2[s2_len])
		s2_len++;
	if (s1_len != s2_len)
		return(0);
	while(s1[k] && k < n)
	{
		if (s1[k] != s2[m])
			return(0);
		k++;
		m++;
	}
	return(1);
}
