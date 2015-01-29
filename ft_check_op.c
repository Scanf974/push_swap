/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_op.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsautron <bsautron@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/27 09:39:39 by bsautron          #+#    #+#             */
/*   Updated: 2015/01/28 17:53:28 by bsautron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void		ft_pputop(char c, t_op *op)
{
	if (c == 'v')
		op->debug = 1;
	if (c == 'G')
		op->color = 1;
	if (c == 'l')
		op->ll = 1;
	if (c == 'b')
		op->breakdown = 1;
}

static void		ft_say_illegal(void)
{
	ft_pputstr("Error: illegal option --\n");
	ft_pputstr("Usage: ./push_swap [-Gblv] [nb1 nb2 ...]\n");
	exit(1);
}

int				ft_check_op(char **argv, t_op *op)
{
	int		i;
	int		j;

	i = 1;
	while (argv[i] && argv[i][0] == '-')
	{
		j = 1;
		while (argv[i][j])
		{
			if (argv[i][j] == '-' && !argv[i][j + 1])
				return (i);
			if (ft_pcharcheck_in_str(argv[i][j], "Gblv"))
				ft_pputop(argv[i][j], op);
			else if (ft_pisdigit(argv[i][j]))
				return (i - 1);
			else
				ft_say_illegal();
			j++;
		}
		i++;
	}
	return (i - 1);
}
