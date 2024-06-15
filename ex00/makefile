# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dgomez-m <aecm.davidgomez@gmail.com>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/06/14 19:35:00 by dgomez-m          #+#    #+#              #
#    Updated: 2024/06/15 05:24:54 by dgomez-m         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Megaphone

CFLAGS = -Wall -Wextra -Werror -std=c++98

SRCS = Megaphone.cpp

all: $(NAME)

$(NAME):
	clang++ $(CFLAGS) $(SRCS) -o $(NAME)

clean:
	rm -f $(NAME)
	
fclean: clean

re: fclean all

.PHONY: all clean fclean re