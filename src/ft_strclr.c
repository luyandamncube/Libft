/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strclr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmncube <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/04 08:21:02 by lmncube           #+#    #+#             */
/*   Updated: 2018/06/04 08:21:04 by lmncube          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void				ft_strclr(char *s)
{
    /*man page req:
        - Sets every character of the string to the value ’\0’
    */

   char *s_mem;
   size_t k;

   s_mem = s;
   k = 0;
   while(s_mem[k])
   {
       s_mem[k] = '\0';
       k++;
   }
}
