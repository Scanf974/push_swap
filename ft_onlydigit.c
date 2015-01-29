/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_onlydigit.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsautron <bsautron@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/26 06:41:40 by bsautron          #+#    #+#             */
/*   Updated: 2015/01/28 16:15:51 by bsautron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		ft_onlydigit(char *str)
{
	int		i;

	i = 0;
	while (str[i])
	{
		if (!ft_pisdigit(str[i]))
			return (0);
		i++;
	}
	return (1);
}
