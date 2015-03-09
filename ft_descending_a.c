/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_descending_a.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsautron <bsautron@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/08 19:43:17 by bsautron          #+#    #+#             */
/*   Updated: 2015/03/08 19:43:36 by bsautron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_descending_a(t_lstrepere *s[2])
{
	int		flag;
	size_t	i;

	i = 0;
	flag = 1;
	while (i < s[0]->len - 1)
	{
		if (s[0]->first->data < s[0]->first->next->data)
			flag = 0;
		s[0]->first = s[0]->first->next;
		i++;
	}
	s[0]->first = s[0]->first->next;
	return (flag);
}
