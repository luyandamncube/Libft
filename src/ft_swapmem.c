/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swapmem.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmncube <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/23 12:34:05 by lmncube           #+#    #+#             */
/*   Updated: 2018/08/23 12:34:26 by lmncube          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_swapmem(char **store, char *buf)
{
	char	*tempstore;

	if (*store)
	{
		tempstore = *store;
		*store = ft_strjoin(tempstore, buf);
		free(tempstore);
		tempstore = NULL;
	}
}
