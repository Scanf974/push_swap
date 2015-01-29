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
OBJ = $(SRC:.c=.o)
NAME = liblstdoublecircu.a
CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME):
	$(CC) -I ../includes -c $(SRC) $(CFLAGS)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
