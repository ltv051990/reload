#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tlutsyk <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/10/25 16:50:28 by tlutsyk           #+#    #+#              #
#    Updated: 2017/10/25 16:50:30 by tlutsyk          ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME = ft_display_file
CFILE = ft_display_file.c
OFILE = ft_display_file.o

all: $(NAME)

$(NAME):
	@gcc -c -Wall -Wextra -Werror $(CFILE)
	@gcc -Wall -Wextra -Werror $(OFILE) -o $(NAME)

clean:
	@/bin/rm -f $(OFILE)

fclean: clean
	@/bin/rm -f $(NAME)