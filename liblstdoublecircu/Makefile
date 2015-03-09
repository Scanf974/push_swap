# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bsautron <bsautron@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/03/08 08:12:39 by bsautron          #+#    #+#              #
#    Updated: 2015/03/08 08:19:58 by bsautron         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
SRC = ft_lputchar.c \
	  ft_lputstr.c \
	  ft_lputnbr.c \
	  ft_lstdc_rinit.c \
	  ft_lstdc_create.c \
	  ft_lstdc_add.c \
	  ft_lstdc_add_back.c \
	  ft_lstdc_delfirst.c \
	  ft_lstdc_print.c
OBJ = $(SRC:%.c=%.o)
NAME = liblstdoublecircu.a
CFLAGS = -Wall -Wextra -Werror

.PHONY: all re fclean clean

all: $(NAME)

$(NAME): $(OBJ)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)

%.o: %.c ../includes/libldc.h
	$(CC) $(CFLAGS) -I ../includes/ -c $< 

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
