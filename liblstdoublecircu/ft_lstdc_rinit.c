/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdc_rinit.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsautron <bsautron@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/23 22:31:07 by bsautron          #+#    #+#             */
/*   Updated: 2015/01/24 06:15:28 by bsautron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libldc.h"

void	ft_lstdc_rinit(t_lstrepere **lst)
{
	if (*lst == NULL)
		*lst = (t_lstrepere *)malloc(sizeof(t_lstrepere));
	(*lst)->first = NULL;
	(*lst)->last = NULL;
	(*lst)->len = 0;
}
