/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmncube <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/03 16:43:48 by lmncube           #+#    #+#             */
/*   Updated: 2018/06/03 16:43:50 by lmncube          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char 	*ft_strlcpy(char *dst, char *src, size_t size)
{
	/*man page req:
	  -size-bounded string copying
	  -safer, less buggy version of strncpy
	  -takes full size of buffer, not just length
	  -if size > 0, null-terminate
NOTE: size_t is actuALLY an unsigned int
*/
	size_t k;

	k = 0;
	if (size > 0)
	{
		while (k < size)
		{
			dst[k] = src[k];
			k++;
		}
		dst[k] = '\0';
	}
	return (dst);
}
