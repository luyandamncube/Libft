/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmncube <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/03 16:45:34 by lmncube           #+#    #+#             */
/*   Updated: 2018/06/13 09:10:38 by lmncube          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char		*new_str;
	size_t		k;

	k = 0;
	if (NULL == (new_str = malloc(sizeof(char) * size + 1)))
		return (NULL);
	while (k < (size + 1))
	{
		new_str[k] = '\0';
		k++;
	}
	return (new_str);
}
