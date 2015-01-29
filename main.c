/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsautron <bsautron@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/23 12:52:31 by bsautron          #+#    #+#             */
/*   Updated: 2015/01/28 18:37:43 by bsautron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	ft_say_instru(int ret)
{
	ft_pputstr("\nInstructions: ");
	ft_pputnbr(ret);
	ft_pputchar('\n');
}

static void	ft_say_no_valid(int i)
{
	ft_pputstr("Error: argv[");
	ft_pputnbr(i);
	ft_pputstr("] is not a valid argument\n");
	exit(1);
}

static void	ft_say_not_enought(void)
{
	ft_pputstr("Error: not enought argument\n");
	exit(1);
}

static void	ft_add_argv(char *argv, t_lstrepere *stack[2], int i)
{
	if ((ft_onlydigit(argv) || ft_onlydigit(&argv[1]))
		&& (ft_patoi(argv) < 2147483647 && ft_patoi(argv) > -2147483648))
		ft_lstdc_add_back(&stack[0], ft_patoi(argv));
	else
		ft_say_no_valid(i);
}

int			main(int argc, char **argv)
{
	int				(*func[9])(t_lstrepere **);
	t_lstrepere		**stack;
	int				i;
	t_op			op;
	int				ret;

	if (argc > 1)
	{
		init_all(&op, func);
		stack = init_lst();
		i = 1 + ft_check_op(argv, &op);
		if (argc - i == 0)
			ft_say_not_enought();
		while (argv[i])
		{
			ft_add_argv(argv[i], stack, i);
			i++;
		}
		if ((ret = ft_sort_this(stack, func, &op)) && op.breakdown)
			ft_say_instru(ret);
	}
	else
		ft_say_not_enought();
	return (0);
}
