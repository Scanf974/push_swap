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
	  ft_pstrdup.c \
	  ft_patoi.c \
	  ft_pisdigit.c \
	  ft_onlydigit.c \
	  ft_pcharcheck_in_str.c \
	  ft_print_debug.c \
	  ft_sort_this.c \
	  ft_debug.c \
	  ft_check_op.c \
	  push_swap.c

OBJ = $(SRC:.c=.o)
NAME = push_swap
FLAGS = -Wall -Wextra -Werror
LIBLDC = -L./liblstdoublecircu -llstdoublecircu
LIBPRE = -L./prelim -lstack

all: $(NAME)

$(NAME):
	make -C liblstdoublecircu/
	make -C prelim/
	@$(CC) $(FLAGS) -I./includes -c $(SRC)
	@$(CC) -o $(NAME) $(OBJ) $(LIBLDC) $(LIBPRE)
	@echo "push_swap: made"

clean:
	@rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

