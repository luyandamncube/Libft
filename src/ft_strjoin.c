/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmncube <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/03 16:43:26 by lmncube           #+#    #+#             */
/*   Updated: 2018/06/03 16:43:27 by lmncube          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char				*ft_strjoin(const char *s1, char const *s2)
{
    /*
        man req:
            - Allocates (with malloc(3)) and returns a “fresh” string end- ing with ’\0’, 
             result of the concatenation of s1 and s2. If the allocation fails the function returns NULL.
    */
   size_t k,m,n,p;
   char *s_new;

   k = 0;
   m = 0;
   n = 0;
   p = 0;
   while(s1[k])
       k++;
   while(s2[m])
       m++;
   if (!k && !m)
       return(NULL);			//Check this return value
   if (NULL == (s_new = (char*)malloc(sizeof(char)*(k+m)+1)))
       return(NULL);
   while(s1[n])                     //REWRITE: should be strcpy
   {
	   s_new[n] = s1[n];
	   n++;
   }
   while(s2[p])                     //REWRITE: should be strcat
   {
	   s_new[n] = s2[p];
	   n++;
	   p++;
   }
   s_new[n] = '\0';
   return (s_new);
   /*
   	char	*join;

	if (!(join = ft_strnew(ft_strlen(s1) + ft_strlen(s2) + 1)))
		return (NULL);
	if (s1)
		ft_strcpy(join, s1);
	if (s2)
		ft_strcat(join, s2);
	return (join);
   */

}
