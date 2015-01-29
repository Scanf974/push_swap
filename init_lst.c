/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_lst.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsautron <bsautron@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/28 17:42:35 by bsautron          #+#    #+#             */
/*   Updated: 2015/01/28 17:49:21 by bsautron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_lstrepere		**init_lst(void)
{
	t_lstrepere		**stack;

	stack = (t_lstrepere **)malloc(sizeof(t_lstrepere *) * 2);
	stack[0] = NULL;
	stack[1] = NULL;
	ft_lstdc_rinit(&stack[0]);
	ft_lstdc_rinit(&stack[1]);
	return (stack);
}
