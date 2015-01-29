/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_this.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsautron <bsautron@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/26 06:51:18 by bsautron          #+#    #+#             */
/*   Updated: 2015/01/28 17:48:37 by bsautron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

typedef	size_t	t_sz;

static int	ft_swap_first(t_lstrepere *s[2], int (**f)(t_lstrepere **), t_op o)
{
	push_swap(s, F_PUSH, F_STB, f, o);
	push_swap(s, F_SWAP, F_STB, f, o);
	push_swap(s, F_PUSH, F_STA, f, o);
	return (3);
}

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

int			ft_sort_this(t_lstrepere *s[2], int (**f)(t_lstrepere **), t_op *op)
{
	size_t		i;
	size_t		j;
	size_t		tmp;
	int			ret;

	ret = 0;
	i = 0;
	tmp = s[0]->len;
	while (i < tmp)
	{
		j = 0;
		push_swap(s, F_PUSH, F_STB, f, *op);
		ret++;
		while (j < s[0]->len)
		{
			if (s[0]->first->data < s[1]->first->data)
				ret += ft_swap_first(s, f, *op);
			push_swap(s, F_ROTS, F_STA, f, *op);
			ret++;
			j++;
		}
		i++;
	}
	ret += ft_r(s, f, *op, tmp);
	return (ret);
}
