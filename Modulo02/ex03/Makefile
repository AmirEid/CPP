# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aeid <aeid@student.42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/27 16:37:21 by aeid              #+#    #+#              #
#    Updated: 2024/10/28 14:12:56 by aeid             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = triangle
SRC = Fixed.cpp main.cpp Point.cpp bsp.cpp
OBJ = $(SRC:.cpp=.o)
FLAGS = -Wall -Wextra -Werror -std=c++98
CC = g++

BLUE = \033[0;34m
NC = \033[0m
GREEN = \033[0;32m

all: $(NAME)

$(NAME): $(OBJ)
	@echo "$(BLUE)Compiling $(NAME) $(NC)"
	@$(CC) $(FLAGS) $(OBJ) -o $(NAME)

%.o: %.cpp
	@echo "$(BLUE)Compiling Complete $(NC)"
	@$(CC) $(FLAGS) -c $< -o $@

clean:
	@echo "$(BLUE)Cleaning $(NAME) $(NC)"
	@rm -f $(OBJ)
	@echo "$(GREEN)Cleaned $(NAME) $(NC)"

fclean: clean
	@echo "$(BLUE)Full Cleaning $(NAME) $(NC)"
	@rm -f $(NAME)
	@echo "$(GREEN)Full Cleaned $(NAME) $(NC)"

re: fclean all

.PHONY: all clean fclean re