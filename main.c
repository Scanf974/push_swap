/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsautron <bsautron@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/23 12:52:31 by bsautron          #+#    #+#             */
/*   Updated: 2015/03/08 20:01:02 by bsautron         ###   ########.fr       */
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

static void	ft_add_argv(char *argv, t_lstrepere *stack[2], int i)
{
	if ((ft_onlydigit(argv) || ft_onlydigit(&argv[1]))
		&& (!ft_pstrcmp(argv, ft_pitoa(ft_patoi(argv)))
		|| (argv[0] == '-' && !ft_pstrcmp(argv, ft_pitoa(ft_patoi(argv))))
		|| (argv[0] == '+' && !ft_pstrcmp(argv + 1, ft_pitoa(ft_patoi(argv))))
		|| !ft_pstrcmp(argv, "-0")))
		ft_lstdc_add_back(&stack[0], ft_patoi(argv));
	else
		ft_say_no_valid(i);
}

static void	ft_bitch_parse_each_argv_plz(char **argv)
{
	int		i;
	int		pos;

	i = 0;
	while (argv[i])
	{
		if ((pos = ft_have_pow(argv[i])))
			argv[i] = ft_pitoa(
				ft_pow(ft_patoi(argv[i]), ft_patoi(&argv[i][pos])));
		i++;
	}
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
		ft_bitch_parse_each_argv_plz(argv);
		if (argc - i == 0)
			return (0);
		while (argv[i])
		{
			ft_add_argv(argv[i], stack, i);
			i++;
		}
		ft_check_doublon(stack);
		ft_print_first_stack(stack, op);
		if ((ret = ft_sort_this(stack, func, &op)) && op.breakdown)
			ft_say_instru(ret);
	}
	return (0);
}
