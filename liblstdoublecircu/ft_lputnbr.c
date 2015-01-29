/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsautron <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/04 14:28:43 by bsautron          #+#    #+#             */
/*   Updated: 2015/01/26 15:12:08 by bsautron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libldc.h"

void	ft_lputnbr(int n)
{
	int		stop;

	stop = 0;
	if (n == -2147483648)
	{
		ft_lputstr("-2147483648");
		stop = 1;
	}
	else if (n < 0)
	{
		ft_lputchar('-');
		n = -n;
	}
	if (n >= 10 && !stop)
	{
		ft_lputnbr(n / 10);
		ft_lputchar(n % 10 + '0');
	}
	else if (!stop)
		ft_lputchar(n + '0');
}
