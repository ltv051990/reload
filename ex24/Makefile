#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tlutsyk <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/10/25 15:04:52 by tlutsyk           #+#    #+#              #
#    Updated: 2017/10/25 15:42:58 by tlutsyk          ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME = libft.a
HEADER = includes/
CFILES = srcs/ft_putchar.c srcs/ft_putstr.c srcs/ft_strcmp.c srcs/ft_strlen.c\
	srcs/ft_swap.c
OFILES = ft_putchar.o ft_putstr.o ft_strcmp.o ft_strlen.o ft_swap.o


all: $(NAME)

make_lib:
	gcc -c -Wall -Wextra -Werror $(CFILES) -I $(HEADER)

$(NAME): make_lib
	ar rc $(NAME) $(OFILES)

clean:
	/bin/rm -f $(OFILES)

fclean: clean
	/bin/rm -f $(NAME)

re: fclean all