/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sorted_a.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsautron <bsautron@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/08 19:44:00 by bsautron          #+#    #+#             */
/*   Updated: 2015/03/08 19:44:22 by bsautron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_sorted_a(t_lstrepere *s[2], int first)
{
	int		flag;
	size_t	i;

	i = 0;
	flag = 1;
	while (i < s[0]->len - 1)
	{
		if (first && i == s[0]->len - 2 && flag
				&& s[0]->first->data > s[0]->first->next->data)
			flag = -1;
		else if (s[0]->first->data > s[0]->first->next->data)
			flag = 0;
		s[0]->first = s[0]->first->next;
		i++;
	}
	s[0]->first = s[0]->first->next;
	return (flag);
}
