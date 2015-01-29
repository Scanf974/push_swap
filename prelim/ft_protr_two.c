/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_protr_two.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsautron <bsautron@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/24 05:28:16 by bsautron          #+#    #+#             */
/*   Updated: 2015/01/27 10:43:25 by bsautron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "prelim.h"

int		ft_protr_two(t_lstrepere **stack)
{
	static int	i;

	i++;
	ft_protr_one(&stack[0]);
	ft_protr_one(&stack[1]);
	return (i);
}
