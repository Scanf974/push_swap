/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   init_func.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsautron <bsautron@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/28 17:42:03 by bsautron          #+#    #+#             */
/*   Updated: 2015/01/28 17:48:56 by bsautron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	init_func(int (**func)(t_lstrepere **))
{
	func[0] = ft_pswap_one;
	func[1] = ft_pswap_two;
	func[2] = ft_prot_one;
	func[3] = ft_prot_two;
	func[4] = ft_protr_one;
	func[5] = ft_protr_two;
	func[6] = ft_ppusha;
	func[7] = ft_ppushb;
	func[8] = NULL;
}
