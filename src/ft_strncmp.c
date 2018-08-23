/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmncube <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/03 14:48:12 by lmncube           #+#    #+#             */
/*   Updated: 2018/06/11 10:38:00 by lmncube          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	k;

	k = 0;
	while (s1[k] && s1[k] == s2[k] && k < n)
		k++;
	if (k == n)
		return (0);
	return ((unsigned char)s1[k] - (unsigned char)s2[k]);
}
