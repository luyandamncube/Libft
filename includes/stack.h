/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lmncube <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/17 09:10:19 by lmncube           #+#    #+#             */
/*   Updated: 2018/09/17 09:11:54 by lmncube          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STACK_H
# define STACK_H
# include "libft.h"

typedef struct  s_stack
{
    int         *s;
    int         top;
}               t_stack;

void			ft_push(int temp, t_stack *current);
int				ft_pop(t_stack *current);

#endif
