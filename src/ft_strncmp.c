/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmncube <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/03 14:48:12 by lmncube           #+#    #+#             */
/*   Updated: 2018/06/03 16:20:20 by lmncube          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
int		ft_strncmp(const char *s2, const char *s1, size_t n)
{
	/*man page req:
	  -compare two strings
	  -finds if s1 is less than, mathces or is greater than s2
	  -compares the first n byes of s1 and s2
	  -performs binary comparison of characters
	  */

	unsigned char	*s1_ptr;
	unsigned char	*s2_ptr;
	size_t			i;

	s1_ptr = (unsigned char*)s1;
	s2_ptr = (unsigned char*)s2;
	i = 0;
	while (s1[i] && s1_ptr[i] == s2_ptr[i] && i < n)
		i++;
	if (i == n)
		return (0);
	return (s2_ptr[i] - s1_ptr[i]);
}
