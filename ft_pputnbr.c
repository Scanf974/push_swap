/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsautron <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/04 14:28:43 by bsautron          #+#    #+#             */
/*   Updated: 2015/01/26 15:11:14 by bsautron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_pputnbr(int n)
{
	int		stop;

	stop = 0;
	if (n == -2147483648)
	{
		ft_pputstr("-2147483648");
		stop = 1;
	}
	else if (n < 0)
	{
		ft_pputchar('-');
		n = -n;
	}
	if (n >= 10 && !stop)
	{
		ft_pputnbr(n / 10);
		ft_pputchar(n % 10 + '0');
	}
	else if (!stop)
		ft_pputchar(n + '0');
}
