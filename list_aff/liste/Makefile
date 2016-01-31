#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aollivie <aollivie@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/02/02 08:22:38 by aollivie          #+#    #+#              #
#    Updated: 2016/01/31 19:51:17 by aollivie         ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME = list.exe
FLAG= -Wextra -Wall -Wpadded -Wstrict-prototypes -Wwrite-strings -Wconversion
IDIR = ../../libft/libft.a
LIB=-lncurses
SRC = src_liste/main_list.c src_liste/ft_select_liste.c src_liste/ft_select_liste_free.c

OBJ = $(SRC:.c=.o)

all : $(NAME)

$(NAME) : $(OBJ)
	@make -C ../.././libft/
	@gcc $(OBJ) $(IDIR) $(LIB) -o $(NAME)
%.o: %.c
	@gcc -c $(FLAG) $< -o $@

clean:
	@rm -f $(OBJ)
	@make  clean -C ../.././libft

fclean: clean
	@rm -f $(NAME)
	@make  clean -C ../.././libft

re: fclean all

.PHONY : all clean fclean re
