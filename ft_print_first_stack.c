/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_first_stack.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsautron <bsautron@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/08 19:54:20 by bsautron          #+#    #+#             */
/*   Updated: 2015/03/08 19:55:52 by bsautron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_print_first_stack(t_lstrepere **s, t_op op)
{
	if (op.debug)
	{
		if (op.color)
			ft_pputstr("\033[33m");
		ft_pputstr("Stacks stated with:\033[0m\n");
		ft_print_debug(s);
		ft_pputchar('\n');
	}
}
