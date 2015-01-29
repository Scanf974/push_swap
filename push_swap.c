/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ppswap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsautron <bsautron@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/24 03:03:46 by bsautron          #+#    #+#             */
/*   Updated: 2015/01/28 18:26:44 by bsautron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#define FLAGS	int op, int wst

static void	ft_push_that(int wst, int *opp, int *st)
{
	if ((wst & F_STA) == F_STA)
	{
		*opp = 6;
		*st = 0;
	}
	if ((wst & F_STB) == F_STB)
	{
		*opp = 7;
		*st = 1;
	}
}

static void	ft_func_two(int op, int *opp)
{
	if ((op & F_SWAP) == F_SWAP)
		*opp = 1;
	if ((op & F_ROTS) == F_ROTS)
		*opp = 3;
	if ((op & F_ROTR) == F_ROTR)
		*opp = 5;
}

static void	ft_func_one(int op, int wst, int *opp, int *st)
{
	if ((op & F_SWAP) == F_SWAP)
		*opp = 0;
	if ((op & F_ROTS) == F_ROTS)
		*opp = 2;
	if ((op & F_ROTR) == F_ROTR)
		*opp = 4;
	if ((wst & F_STA) == F_STA)
		*st = 0;
	if ((wst & F_STB) == F_STB)
		*st = 1;
}

int			push_swap(t_lstrepere *stack[2],
		FLAGS, int (**f)(t_lstrepere **), t_op option)
{
	static int	i;
	int			st;
	int			opp;

	i++;
	st = 2;
	if ((op & F_PUSH) == F_PUSH)
	{
		ft_push_that(wst, &opp, &st);
		(*f[opp])(stack);
	}
	else if ((wst & F_STS) == F_STS)
	{
		ft_func_two(op, &opp);
		(*f[opp])(stack);
	}
	else
	{
		ft_func_one(op, wst, &opp, &st);
		(*f[opp])(&stack[st]);
	}
	ft_debug(stack, opp, st, op, wst, option);
	return (i);
}
