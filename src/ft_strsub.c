/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmncube <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/03 16:46:33 by lmncube           #+#    #+#             */
/*   Updated: 2018/06/03 16:46:37 by lmncube          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char				*ft_strsub(const char *s, unsigned int start, size_t len)
{
	/*
	   man page req:
	   - Allocates (with malloc(3)) and returns a “fresh” substring from the string given as argument. 
	   - The substring begins at index start and is of size len. 
	   - If start and len aren’t refering to a valid substring, the behavior is undefined. 
	   - If the allocation fails, the function returns NULL.
	   */
	size_t k,m,n;
	char *s_mem;

	k = 0;
	m = 0;
	n = start;
	if (s == NULL)
		return(NULL);
	while(s[k])
		k++;
	s_mem = (char*)malloc(sizeof(char)*(len)+1);		//ft_strnew vibes

	while(s_mem[k] && m < len )
	{
		s_mem[k] = s[n];
		k++;
		n++;
	}
	s_mem[k] = '\0';
	return(s_mem);

}
