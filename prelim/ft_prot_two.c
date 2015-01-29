/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_prot_two.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsautron <bsautron@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/24 05:20:11 by bsautron          #+#    #+#             */
/*   Updated: 2015/01/27 10:42:58 by bsautron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "prelim.h"

int	ft_prot_two(t_lstrepere **stack)
{
	static int	i;

	i++;
	ft_prot_one(&stack[0]);
	ft_prot_one(&stack[1]);
	return (i);
}
