# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bsautron <bsautron@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/03/08 08:08:45 by bsautron          #+#    #+#              #
#    Updated: 2015/03/08 08:22:14 by bsautron         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
SRC = ft_pswap_one.c \
	  ft_pswap_two.c \
	  ft_prot_one.c \
	  ft_prot_two.c \
	  ft_protr_one.c \
	  ft_protr_two.c \
	  ft_ppusha.c \
	  ft_ppushb.c
OBJ = $(SRC:%.c=%.o)
NAME = libstack.a
FLAGS = -Wall -Wextra -Werror

.PHONY: all clean fclean re

all: $(NAME)

$(NAME): $(OBJ)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)

%.o: %.c ../includes/prelim.h
	$(CC) $(FLAGS) -I ../includes -c $<

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

