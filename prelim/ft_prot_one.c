/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_prot_one.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsautron <bsautron@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/24 05:02:02 by bsautron          #+#    #+#             */
/*   Updated: 2015/01/27 10:42:49 by bsautron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "prelim.h"

int		ft_prot_one(t_lstrepere **stack)
{
	static int	i;

	i++;
	(*stack)->last = (*stack)->last->next;
	(*stack)->first = (*stack)->first->next;
	return (i);
}
