# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: allespag <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/11/29 20:34:32 by allespag          #+#    #+#              #
#    Updated: 2018/12/03 17:42:47 by jallen           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC=	main.c		\
	  	lst.c		\
		error.c		\
		ft_bckt.c	\
		ft_extra.c	\

OBJ= $(SRC:.c=.o)

LIB= libft/libft.a

CC = gcc

CFLAGS = -Wall -Wextra -Werror

NAME=	fillit

all: $(NAME)

$(NAME): $(OBJ)
		@make -C libft
		$(CC) -o $(NAME) $(CFLAGS) $(OBJ) $(LIB)
		make fclean -C libft

.PHONY: clean
clean:
		rm -f $(OBJ)
	
.PHONY: fclean
fclean: clean
		rm -f $(NAME)

.PHONY: re
re: fclean $(NAME)
