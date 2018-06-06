/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmncube <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/03 16:44:35 by lmncube           #+#    #+#             */
/*   Updated: 2018/06/03 16:44:39 by lmncube          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char				*ft_strmapi(const char *s, char (*f)(unsigned int, char))
{
	/*
	   man page req:
	   - Applies the function f to each character of the string given as argument to create a 
	   “fresh” new string (with malloc(3)) resulting from the successive applications of f
	   -has an index
	   */
	  /*
	size_t k,m;
	char *s_mem;
	char *new_mem;

	k = 0;
	m = 0;
	s_mem = (char*)s;

	while(s_mem[k])
		k++;
	new_mem = (char*)malloc(sizeof(char)*k +1);

	while(new_mem[m])
	{
		new_mem[m] = f(m,s_mem[m]);
		m++;
	}
	new_mem[m] = '\0';
	return(new_mem);
	*/
	size_t	size;
	size_t	i;
	char	*out;
	if(s)
	{
		size = ft_strlen(s);
		if (NULL == (out = malloc(size + 1)))
			return (NULL);
		i = -1;
		while (++i < size)
			out[i] = (*f)(i,s[i]);
		out[i] = '\0';
		return (out);
	}
	return(NULL);
}
