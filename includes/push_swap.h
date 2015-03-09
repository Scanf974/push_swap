/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsautron <bsautron@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/23 12:51:26 by bsautron          #+#    #+#             */
/*   Updated: 2015/03/08 20:00:09 by 9087             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>
# include "libldc.h"
# include "prelim.h"

# define F_SWAP	00000100
# define F_ROTS	00001000
# define F_ROTR	00010000
# define F_PUSH	00100000

# define F_STA	00000001
# define F_STB	00000010
# define F_STS	00000011

# define SA		(F_SWAP | F_STA)
# define SB		(F_SWAP | F_STB)
# define SS		(F_SWAP | F_STS)
# define RA		(F_ROTS | F_STA)
# define RB		(F_ROTS | F_STB)
# define RR		(F_ROTS | F_STS)
# define RRA	(F_ROTR | F_STA)
# define RRB	(F_ROTR | F_STB)
# define RRR	(F_ROTR | F_STS)
# define PA		(F_PUSH | F_STA)
# define PB		(F_PUSH | F_STB)

typedef unsigned int	t_uint;

typedef struct			s_op
{
	char	debug;
	char	color;
	char	breakdown;
	char	ll;
	char	end;
}						t_op;

void					ft_debug(t_lstrepere *stack[2],
						int opp, int st, int op, int wst, t_op option);
void					init_op(t_op *op);
void					init_func(int (**func)(t_lstrepere **));
t_lstrepere				**init_lst(void);
void					init_all(t_op *op, int (**func)(t_lstrepere **));
void					ft_each(int flag, t_op op);
void					ft_pputchar(char c);
void					ft_pputstr(char const *str);
int						ft_pstrcmp(const char *s1, const char *s2);
void					ft_pputnbr(int nb);
char					*ft_pstrdup(const char *s1);
int						ft_patoi(const char *str);
char					*ft_pitoa(int n);
int						ft_pisdigit(char c);
int						ft_onlydigit(char *str);
int						ft_pcharcheck_in_str(char c, char *str);
void					ft_print_debug(t_lstrepere *stack[2]);
int						push_swap(t_lstrepere *stack[2], int op, int wst,
						int (**f)(t_lstrepere **), t_op option);
int						ft_sort_this(t_lstrepere *stack[2],
						int (**f)(t_lstrepere **), t_op *op);
int						ft_check_op(char **argv, t_op *op);
size_t					ft_pos_min(t_lstrepere *s[2]);
int						ft_descending_a(t_lstrepere *s[2]);
int						ft_sorted_a(t_lstrepere *s[2], int first);
void					ft_print_first_stack(t_lstrepere **s, t_op op);
int						ft_have_pow(char *str);
int						ft_pow(int base, int pow);
void					ft_check_doublon(t_lstrepere *s[2]);

#endif
