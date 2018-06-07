/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmncube <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/03 16:42:53 by lmncube           #+#    #+#             */
/*   Updated: 2018/06/03 16:42:56 by lmncube          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int				ft_strequ(const char *s1, char const *s2)
{
	/*
	   man page req:
	   - Lexicographical comparison between s1 and s2. 
	   - If the 2 strings are identical the function returns 1, or 0 otherwise.
	   */
	//ASSERT_EQ_STR(X, Y)	(X) && (Y) && (X == Y) && strcmp(X,Y) == 0 ? 1 : 0
	size_t s1_len, s2_len;
	size_t k,m;

	s1_len = 0;
	s2_len = 0;
	k = 0;
	m = 0;
	if (s1 && s2)
	{
		while(s1[s1_len])
			s1_len++;
		while(s2[s2_len])
			s2_len++;
		if (s1_len != s2_len)
			return(0);
		while(s1[k] && s2[m])
		{
			if (s1[k] != s2[m])
				return(0);
			k++;
			m++;
		}
	}
	return(1);
}
