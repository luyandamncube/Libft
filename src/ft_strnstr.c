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
	   */

	size_t k, m;
	size_t needle_len, checker;
	//char *new_needle;
	//new_needle = needle;
	checker = 0;
	k = 0;
	m = 0;
	needle_len = ft_strlen(needle);
	/*
	   x   get needle length
	   -iterate through haystack ,char by char
	   -check if char matches first char of needle
	   -iterate through needle to see if all chars match, add to counter
	   -if counter == needle_len, then return needle
	   */
	while (haystack[k] != '\0')
	{
		while (needle[m])
		{
			if (haystack[k] == needle[m])
				checker++;
			m++;
		}
		k++;
	}
	if (checker == len)
		return (char *)(haystack);
	else 
		return (NULL);
}
