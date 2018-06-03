/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmncube <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/03 16:15:55 by lmncube           #+#    #+#             */
/*   Updated: 2018/06/03 16:18:32 by lmncube          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strchr(const char *s, int c)
{
	/* man page req:
	   -locate char in string
	   -returns a pointer to FIRST occurence of the character in the string
	   -basically returns everything after and including the character
	   HOW TO RETURN A POINTER TO A SPECIFIC LOCATION OF AN ARRAY
	   1 assign a pointer to the array in memory
	   2 increment the pointer to the position you need 
	   */
	int			i;

	i = 0;
	while (s[i])
		i++;
	if (s[i] == (char)c)
		return ((char*)&s[i]);
	i--;
	while (i > -1)
	{
		if (s[i] == (char)c)
			return ((char*)&s[i]);
		i--;
	}
	return (NULL);
}
