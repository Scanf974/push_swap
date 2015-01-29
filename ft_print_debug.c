/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_debug.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsautron <bsautron@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/26 06:49:52 by bsautron          #+#    #+#             */
/*   Updated: 2015/01/28 16:46:22 by bsautron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_print_debug(t_lstrepere *stack[2])
{
	if (stack)
	{
		ft_pputstr("stack a: ");
		ft_lstdc_print(stack[0]);
		ft_pputstr("stack b: ");
		ft_lstdc_print(stack[1]);
	}
}
