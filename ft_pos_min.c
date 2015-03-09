/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pos_min.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsautron <bsautron@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/08 19:42:32 by bsautron          #+#    #+#             */
/*   Updated: 2015/03/08 19:42:58 by bsautron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

size_t	ft_pos_min(t_lstrepere *s[2])
{
	int		save;
	size_t	index;
	size_t	i;

	save = s[0]->first->data;
	index = 0;
	i = 0;
	while (i < s[0]->len)
	{
		if (save > s[0]->first->data)
		{
			save = s[0]->first->data;
			index = i;
		}
		s[0]->first = s[0]->first->next;
		i++;
	}
	return (index);
}
