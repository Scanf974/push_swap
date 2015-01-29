/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pswap_one.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsautron <bsautron@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/24 03:15:44 by bsautron          #+#    #+#             */
/*   Updated: 2015/01/27 10:43:35 by bsautron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "prelim.h"

int		ft_pswap_one(t_lstrepere **stack)
{
	int			tmp;
	static int	i;

	i++;
	if ((*stack)->len > 1)
	{
		tmp = (*stack)->first->data;
		(*stack)->first->data = (*stack)->first->next->data;
		(*stack)->first->next->data = tmp;
	}
	return (i);
}
