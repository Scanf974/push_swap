/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pow.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsautron <bsautron@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/08 19:50:41 by bsautron          #+#    #+#             */
/*   Updated: 2015/03/08 19:51:06 by bsautron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_pow(int base, int pow)
{
	int		resultat;

	resultat = 1;
	if (pow == 0)
		return (1);
	else if (pow < 0)
		return (0);
	while (pow > 0)
	{
		resultat *= base;
		pow--;
	}
	return (resultat);
}
