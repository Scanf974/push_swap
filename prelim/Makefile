CC = gcc
SRC = ft_pswap_one.c \
	  ft_pswap_two.c \
	  ft_prot_one.c \
	  ft_prot_two.c \
	  ft_protr_one.c \
	  ft_protr_two.c \
	  ft_ppusha.c \
	  ft_ppushb.c
OBJ = $(SRC:.c=.o)
NAME = libstack.a
FLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME):
	$(CC) $(FLAGS) -I../includes -c $(SRC)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
