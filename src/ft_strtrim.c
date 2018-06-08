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
#include <stdio.h>

static int			ft_iswhitespace(const char c)
{
	if (c == ' ' || c == '\n' || c == '\t')
		return (1);
	return(0);
}

char				*ft_strtrim(const char *s)
{
	char	*out;
	char	*last;
4	while (*s && ft_iswhitespace(*s))
		s++;
	if (NULL == (out = ft_strdup(s)))
		return(NULL);
	last = out + ft_strlen(out) - 1;
	while (last > out && ft_iswhitespace(*last))
		*last-- = 0;
	return (out);
}

