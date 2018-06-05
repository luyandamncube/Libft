/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmncube <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/03 16:44:17 by lmncube           #+#    #+#             */
/*   Updated: 2018/06/03 16:44:27 by lmncube          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char				*ft_strmap(const char *s, char (*f)(char))
{
	/*
	   man page req:
	   - Applies the function f to each character of the string given as argument to create a 
	   “fresh” new string (with malloc(3)) resulting from the successive applications of f
	   */
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
		new_mem[m] = f(s_mem[m]);
		m++;
	}
	new_mem[m] = '\0';
	return(new_mem);
}
