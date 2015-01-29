/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdc_init.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsautron <bsautron@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/23 22:31:40 by bsautron          #+#    #+#             */
/*   Updated: 2015/01/26 14:51:26 by bsautron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libldc.h"

t_lstdc		*ft_lstdc_create(int data)
{
	t_lstdc	*new_element;

	new_element = (t_lstdc *)malloc(sizeof(t_lstdc));
	if (!new_element)
		return (NULL);
	new_element->prev = new_element;
	new_element->next = new_element;
	new_element->data = data;
	return (new_element);
}
