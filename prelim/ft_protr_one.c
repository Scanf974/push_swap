/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_protr_one.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsautron <bsautron@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/24 05:25:51 by bsautron          #+#    #+#             */
/*   Updated: 2015/01/27 10:43:15 by bsautron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "prelim.h"

int		ft_protr_one(t_lstrepere **stack)
{
	static int	i;

	i++;
	(*stack)->first = (*stack)->first->prev;
	(*stack)->last = (*stack)->last->prev;
	return (i);
}
