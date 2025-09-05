# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: zmounji <zmounji@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/09/05 22:52:51 by zmounji           #+#    #+#              #
#    Updated: 2025/09/05 22:52:52 by zmounji          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = Moar_brainz
CC = c++
CFLAGS = -Wall -Wextra -Werror -std=c++98 -g3

SRC = main.cpp Zombie.cpp
OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
