/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_each.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsautron <bsautron@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/28 18:27:58 by bsautron          #+#    #+#             */
/*   Updated: 2015/01/28 18:32:09 by bsautron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void ft_color_each(int e[11], int i, t_op op)
{
	char	*s[11];

	s[0] = ft_pstrdup("sa: ");
	s[1] = ft_pstrdup("\tsb: ");
	s[2] = ft_pstrdup("\tss: ");
	s[3] = ft_pstrdup("\tra: ");
	s[4] = ft_pstrdup("\trb: ");
	s[5] = ft_pstrdup("\trr: ");
	s[6] = ft_pstrdup("\trra: ");
	s[7] = ft_pstrdup("\trrb: ");
	s[8] = ft_pstrdup("\trrr: ");
	s[9] = ft_pstrdup("\tpa: ");
	s[10] = ft_pstrdup("\tpb: ");
	if (op.color && e[i] > 0)
		ft_pputstr("\033[32m");
	else if (op.color)
		ft_pputstr("\033[31m");
	ft_pputstr(s[i]);
	ft_pputstr("\033[0m");
	ft_pputnbr(e[i]);
}

static void ft_each2(int e[11], t_op op)
{
	int		i;

	i = 0;
	while (i < 11)
	{
		ft_color_each(e, i, op);
		i++;
	}
	ft_pputchar('\n');
}

void		ft_each(int flag, t_op op)
{
	static int	e[11];

	if (flag == SA)
		e[0] += 1;
	if (flag == SB)
		e[1] += 1;
	if (flag == SS)
		e[2] += 1;
	if (flag == RA)
		e[3] += 1;
	if (flag == RB)
		e[4] += 1;
	if (flag == RR)
		e[5] += 1;
	if (flag == RRA)
		e[6] += 1;
	if (flag == RRB)
		e[7] += 1;
	if (flag == RRR)
		e[8] += 1;
	if (flag == PA)
		e[9] += 1;
	if (flag == PB)
		e[10] += 1;
	ft_each2(e, op);
}
