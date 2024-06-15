# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dgomez-m <aecm.davidgomez@gmail.com>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/06/14 19:35:00 by dgomez-m          #+#    #+#              #
#    Updated: 2024/06/15 05:01:46 by dgomez-m         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = PHONEBOOK

CC = clang++
CFLAGS = -Wall -Wextra -Werror -std=c++98 -I./

SRCS = 	PhoneBook.cpp \
	   	Contact.cpp \
	   	main.cpp \

OBJS = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME):$(OBJS)
	$(CC) $(CFLAGS) -o $@ $^
%.o: %.cpp 
	$(CC) $(CFLAGS) -c $^ -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re