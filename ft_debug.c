/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_debug.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsautron <bsautron@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/28 18:12:42 by bsautron          #+#    #+#             */
/*   Updated: 2015/01/28 18:31:11 by bsautron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#define FLAGS	int op, int wst
#define POSTAB	int opp, int st

static void ft_dev(t_lstrepere *stack[2], int opp, int st, t_op op)
{
	if (op.color)
		ft_pputstr("\033[33m");
	if (opp == 0 || opp == 1)
		ft_pputstr("Swap ");
	if (opp == 2 || opp == 3)
		ft_pputstr("Rotation ");
	if (opp == 4 || opp == 5)
		ft_pputstr("Rotation reverse");
	if (opp >= 6)
		ft_pputstr("Push ");
	if (st == 0)
		ft_pputstr("a");
	if (st == 1)
		ft_pputstr("b");
	if (st == 2 && (opp == 0 || opp == 1))
		ft_pputstr("a & b");
	else if (st == 2 && opp < 6)
		ft_pputstr("r & b");
	ft_pputstr("\033[0m");
	ft_pputchar('\n');
	ft_print_debug(stack);
}

static void ft_notdev(int opp, int st, t_op op)
{
	if (opp == 0 || opp == 1)
		ft_pputstr("s");
	if (opp == 2 || opp == 3)
		ft_pputstr("r");
	if (opp == 4 || opp == 5)
		ft_pputstr("rr");
	if (opp >= 6)
		ft_pputstr("p");
	if (st == 0)
		ft_pputstr("a");
	if (st == 1)
		ft_pputstr("b");
	if (st == 2 && (opp == 0 || opp == 1))
		ft_pputstr("s");
	else if (st == 2 && opp < 6)
		ft_pputstr("r");
	if (op.end == 0)
		ft_pputchar(' ');
	else
		ft_pputchar('\n');
}

void		ft_debug(t_lstrepere *stack[2], POSTAB, FLAGS, t_op option)
{
	if (option.debug)
	{
		ft_dev(stack, opp, st, option);
		if (option.ll && option.breakdown)
			ft_each(op | wst, option);
		ft_pputstr("--\n");
	}
	else
		ft_notdev(opp, st, option);
}
