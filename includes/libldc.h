/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libldc.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsautron <bsautron@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/23 21:57:44 by bsautron          #+#    #+#             */
/*   Updated: 2015/01/26 19:27:11 by bsautron         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBLDC_H
# define LIBLDC_H

# include <unistd.h>
# include <string.h>
# include <stdlib.h>

typedef struct		s_lstdc
{
	int				data;
	struct s_lstdc	*prev;
	struct s_lstdc	*next;
}					t_lstdc;

typedef struct		s_lstrepere
{
	t_lstdc		*first;
	t_lstdc		*last;
	size_t		len;
}					t_lstrepere;

void				ft_lputchar(char c);
void				ft_lputnbr(int nb);
void				ft_lputstr(const char *str);
void				ft_lstdc_rinit(t_lstrepere **lst);
t_lstdc				*ft_lstdc_create(int data);
void				ft_lstdc_add(t_lstrepere **rep, int data);
void				ft_lstdc_add_back(t_lstrepere **rep, int data);
void				ft_lstdc_print(t_lstrepere *rep);
void				ft_lstdc_delfirst(t_lstrepere **rep);

#endif
