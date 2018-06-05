/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmncube <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/03 16:46:46 by lmncube           #+#    #+#             */
/*   Updated: 2018/06/03 16:46:49 by lmncube          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int			ft_iswhitespace(const char c)
{
	if (c == ' ' || c == '\n' || c == '\t')
		return (1);
	return(0);
}

char				*ft_strtrim(const char *s)
{
	/*
	   man req:
	   - Allocates (with malloc(3)) and returns a copy of the string given as argument without whitespaces 
	   at the beginning or at the end of the string. Will be considered as whitespaces the following characters ’
	   ’, ’\n’ and ’\t’. If s has no whites- paces at the beginning or at the end, the function returns a copy of s. 
	   - If the allocation fails the function returns NULL.
WRONG: NEEDS TO BE AT BEGINNING AND END OF STRING
*/
	int		i;
	int		j;
	char	*new;
	//int flag_count;


	//flag_count = 0;
	if (!s[0])
		return ((char*)s);
	i = 0;
	//Skip past whitespace at beginning
	while (ft_iswhitespace(*s))
		s++;
	i = ft_strlen(s) - 1;
	if (i == -1)
		return (ft_strnew(0));
	//Mark point at which whitespace ends
	while (!s[i] || ft_iswhitespace(s[i]))
		i--;
	//Allocate new string mem
	new = ft_strnew(++i);
	if (!new)
		return (NULL);
	j = i;
	i = 0;
	while (i < j)
	{
		new[i] = s[i];
		//if (ft_iswhitespace(new[i]))
			//flag_count++;
		i++;
	}
	new[i] = '\0';
	//printf("%d %d %lu",i , flag_count, sizeof(new));
	//if (flag_count == sizeof(new) && new[0] != '\0') 
		//return (ft_strnew(0));

	return(new);
}
