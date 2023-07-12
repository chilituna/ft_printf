# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aarponen <aarponen@student.42berlin.de>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/07/05 11:07:08 by aarponen          #+#    #+#              #
#    Updated: 2023/07/05 17:48:45 by aarponen         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a
FLAGS = -Wall -Werror -Wextra
CC = cc -include ft_printf.h
HEADER = ft_printf.h
RM = rm -f
AR = ar rc

SRC_FILES = ft_printf.c ft_putnumber.c ft_puttext.c ft_putpointer.c ft_puthex.c 

OBJ_FILES = $(SRC_FILES:.c=.o)

.PHONY: all clean fclean re

all: $(NAME)

$(NAME): $(OBJ_FILES)
	$(AR) $(NAME) $(OBJ_FILES)

$(OBJ_FILES): %.o: %.c $(HEADER)
	$(CC) $(FLAGS) -c $< -o $@

clean:
	$(RM) $(OBJ_FILES)

fclean: clean
	$(RM) $(NAME)

re: fclean all