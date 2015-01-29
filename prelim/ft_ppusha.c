/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ppusha.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsautron <bsautron@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/24 05:55:44 by bsautron          #+#    #+#             */
/*   Updated: 2015/01/27 10:41:16 by bsautron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "prelim.h"

int		ft_ppusha(t_lstrepere **stack)
{
	static int	i;

	i++;
	if (stack[1]->len > 0)
	{
		ft_lstdc_add(&stack[0], stack[1]->first->data);
		ft_lstdc_delfirst(&stack[1]);
	}
	return (i);
}
