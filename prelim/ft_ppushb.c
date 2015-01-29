/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ppushb.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsautron <bsautron@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/24 05:55:53 by bsautron          #+#    #+#             */
/*   Updated: 2015/01/27 10:42:39 by bsautron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "prelim.h"

int	ft_ppushb(t_lstrepere **stack)
{
	static int		i;

	i++;
	if (stack[0]->len > 0)
	{
		ft_lstdc_add(&stack[1], stack[0]->first->data);
		ft_lstdc_delfirst(&stack[0]);
	}
	return (i);
}
