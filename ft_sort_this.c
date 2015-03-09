/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_this.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsautron <bsautron@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/26 06:51:18 by bsautron          #+#    #+#             */
/*   Updated: 2015/03/08 19:44:52 by 9087             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

typedef	size_t	t_sz;

static int	ft_r(t_lstrepere *s[2], int (**f)(t_lstrepere **), t_op op, t_sz t)
{
	size_t		i;

	i = 0;
	while (i < t)
	{
		if (i + 1 == t)
			op.end = 1;
		push_swap(s, F_PUSH, F_STA, f, op);
		i++;
	}
	return ((int)i);
}

static int	ft_three(t_lstrepere *s[2], int (**f)(t_lstrepere **), t_op *op)
{
	if (s[0]->first->data > s[0]->first->next->data
			&& s[0]->first->data < s[0]->last->data)
	{
		op->end = 1;
		push_swap(s, F_SWAP, F_STA, f, *op);
		return (1);
	}
	else if (s[0]->first->data > s[0]->first->next->data)
	{
		op->end = 1;
		push_swap(s, F_ROTS, F_STA, f, *op);
		return (1);
	}
	else if (s[0]->first->data > s[0]->last->data)
	{
		op->end = 1;
		push_swap(s, F_ROTR, F_STA, f, *op);
		return (1);
	}
	return (0);
}

static void	z(t_lstrepere *s[2], int (**f)(t_lstrepere **), t_op *op, int *ret)
{
	while (!ft_sorted_a(s, 0))
	{
		if (ft_pos_min(s) < s[0]->len / 2)
		{
			while (ft_pos_min(s))
			{
				push_swap(s, F_ROTS, F_STA, f, *op);
				(*ret)++;
			}
			push_swap(s, F_PUSH, F_STB, f, *op);
			(*ret)++;
		}
		else
		{
			while (ft_pos_min(s))
			{
				push_swap(s, F_ROTR, F_STA, f, *op);
				(*ret)++;
			}
			push_swap(s, F_PUSH, F_STB, f, *op);
			(*ret)++;
		}
	}
}

static int	ft_fin_swap(t_lstrepere *s[2], int (**f)(t_lstrepere **), t_op *op)
{
	push_swap(s, F_ROTR, F_STA, f, *op);
	push_swap(s, F_ROTR, F_STA, f, *op);
	push_swap(s, F_SWAP, F_STA, f, *op);
	push_swap(s, F_ROTS, F_STA, f, *op);
	op->end = 1;
	push_swap(s, F_ROTS, F_STA, f, *op);
	return (5);
}

int			ft_sort_this(t_lstrepere *s[2], int (**f)(t_lstrepere **), t_op *op)
{
	int			ret;

	ret = 0;
	if (ft_descending_a(s) && s[0]->len == 3)
	{
		push_swap(s, F_SWAP, F_STA, f, *op);
		op->end = 1;
		push_swap(s, F_ROTR, F_STA, f, *op);
		ret += 2;
	}
	if (s[0]->len == 3)
		ret += ft_three(s, f, op);
	if (s[0]->first->data > s[0]->first->next->data)
	{
		if (s[0]->len == 2)
			op->end = 1;
		push_swap(s, F_SWAP, F_STA, f, *op);
		ret++;
	}
	if (ft_sorted_a(s, 1) == -1)
		ret += ft_fin_swap(s, f, op);
	z(s, f, op, &ret);
	ret += s[1]->len;
	ft_r(s, f, *op, s[1]->len);
	return (ret);
}
