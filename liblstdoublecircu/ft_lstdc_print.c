/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdc_print.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsautron <bsautron@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/23 23:21:01 by bsautron          #+#    #+#             */
/*   Updated: 2015/01/26 14:52:23 by bsautron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libldc.h"

void	ft_lstdc_print(t_lstrepere *rep)
{
	size_t		i;
	t_lstrepere	tmp;

	tmp = *rep;
	i = tmp.len;
	if (i > 0 && tmp.first->prev)
	{
		tmp.first = tmp.first->prev;
		while (i > 0)
		{
			ft_lputnbr(tmp.first->data);
			tmp.first = tmp.first->prev;
			i--;
			if (i != 0)
				ft_lputchar(' ');
		}
	}
	ft_lputchar('\n');
}
