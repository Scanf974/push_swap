# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: 9087 <9087@student.42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/03/08 04:52:24 by 9087              #+#    #+#              #
#    Updated: 2015/03/08 20:05:58 by 9087             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
SRC = main.c \
	  init_op.c \
	  init_func.c \
	  init_lst.c \
	  init_all.c \
	  ft_each.c \
	  ft_pputchar.c \
	  ft_pputstr.c \
	  ft_pputnbr.c \
	  ft_pstrcmp.c \
	  ft_pstrdup.c \
	  ft_patoi.c \
	  ft_pitoa.c \
	  ft_pos_min.c \
	  ft_descending_a.c \
	  ft_sorted_a.c \
	  ft_pisdigit.c \
	  ft_check_doublon.c \
	  ft_pow.c \
	  ft_have_pow.c \
	  ft_print_first_stack.c \
	  ft_onlydigit.c \
	  ft_pcharcheck_in_str.c \
	  ft_print_debug.c \
	  ft_sort_this.c \
	  ft_debug.c \
	  ft_check_op.c \
	  push_swap.c

OBJ = $(SRC:%.c=%.o)
NAME = push_swap
FLAGS = -Wall -Wextra -Werror
LIBLDC = -L./liblstdoublecircu -llstdoublecircu
LIBPRE = -L./prelim -lstack

.PHONY: all clean fclean re

all: libs $(NAME)

$(NAME): $(OBJ)
	$(CC) -o $(NAME) $(OBJ) $(LIBLDC) $(LIBPRE)
	@echo "                                                 ";
	@echo "                                                 ";
	@echo "                                                 ";
	@echo "                                                 ";
	@echo "              :                  .               ";
	@echo "  t           Ef                ;W    .    .     ";
	@echo "  ED.         E#t              f#E    Di   Dt    ";
	@echo "  E#K:        E#t            .E#f     E#i  E#i   ";
	@echo "  E##W;       E#t           iWW;      E#t  E#t   ";
	@echo "  E#E##t      E#t fi       L##Lffi    E#t  E#t   ";
	@echo "  E#ti##f     E#t L#j     tLLG##L     E########f.";
	@echo "  E#t ;##D.   E#t L#L       ,W#i      E#j..K#j...";
	@echo "  E#ELLE##K:  E#tf#E:      j#E.       E#t  E#t   ";
	@echo "  E#L;;;;;;,  E###f      .D#j         E#t  E#t   ";
	@echo "  E#t         E#K,      ,WK,          f#t  f#t   ";
	@echo "  E#t         EL        EG.            ii   ii   ";
	@echo "              :         ,                        ";
	@echo "                              ┌─┐ ┌┐┌ ┌┬┐";
	@echo "                              ├─┤ │││  ││";
	@echo "           .                  ┴ ┴ ┘└┘ ─┴┘                  ";
	@echo "          ;W                                  t           ";
	@echo "         f#E             ;                ..  ED.         ";
	@echo "       .E#f            .DL               ;W,  E#K:        ";
	@echo "      iWW;     f.     :K#L     LWL      j##,  E##W;       ";
	@echo "     L##Lffi   EW:   ;W##L   .E#f      G###,  E#E##t      ";
	@echo "    tLLG##L    E#t  t#KE#L  ,W#;     :E####,  E#ti##f     ";
	@echo "      ,W#i     E#t f#D.L#L t#K:     ;W#DG##,  E#t ;##D.   ";
	@echo "     j#E.      E#jG#f  L#LL#G      j###DW##,  E#ELLE##K:  ";
	@echo "   .D#j        E###;   L###j      G##i,,G##,  E#L;;;;;;,  ";
	@echo "  ,WK,         E#K:    L#W;     :K#K:   L##,  E#t         ";
	@echo "  EG.          EG      LE.     ;##D.    L##,  E#t         ";
	@echo "  ,            ;       ;@      ,,,      .,,               ";
	@echo "                                            	             ";

libs:
	make -C liblstdoublecircu/
	make -C prelim/

%.o: %.c includes/push_swap.h includes/prelim.h includes/libldc.h
	$(CC) $(FLAGS) -o $@ -I includes/ -c $<

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

