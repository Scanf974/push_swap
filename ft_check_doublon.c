/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_doublon.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsautron <bsautron@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/08 19:58:51 by bsautron          #+#    #+#             */
/*   Updated: 2015/03/08 20:03:54 by bsautron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	ft_get_tab(int *tab, t_lstrepere *s[2])
{
	size_t		l;

	l = 0;
	while (l < s[0]->len)
	{
		tab[l] = s[0]->first->data;
		s[0]->first = s[0]->first->next;
		l++;
	}
}

void		ft_check_doublon(t_lstrepere *s[2])
{
	size_t	i;
	size_t	j;
	int		*tab;

	tab = (int *)malloc(sizeof(int) * (s[0]->len));
	ft_get_tab(tab, s);
	i = 0;
	while (i < s[0]->len)
	{
		j = i + 1;
		while (j < s[0]->len)
		{
			if (tab[i] == tab[j])
			{
				ft_pputstr("Error: doublon\n");
				exit(1);
			}
			j++;
		}
		i++;
	}
}
