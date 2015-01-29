/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pswap_two.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsautron <bsautron@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/24 04:35:02 by bsautron          #+#    #+#             */
/*   Updated: 2015/01/28 15:52:11 by bsautron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "prelim.h"

int		ft_pswap_two(t_lstrepere **stack)
{
	static int	i;

	i++;
	ft_pswap_one(&stack[0]);
	ft_pswap_one(&stack[1]);
	return (i);
}
