# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dna <dna@student.42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/02/11 15:06:19 by dgross            #+#    #+#              #
#    Updated: 2023/02/13 18:56:52 by dna              ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME			= megaphone

SRC				= megaphone.cpp

OBJ_DIR			= ./obj/

OBJ				= $(addprefix $(OBJ_DIR),$(SRC:.cpp=.o))

CC				= c++

CFLAGS			= -Wall -Wextra -Werror -std=c++98 -g

all: $(NAME)

obj:
	@mkdir -p $(OBJ_DIR)

obj/%.o: %.cpp obj
	@$(CC) $(CFLAGS) -c $< -o $@

$(NAME): $(OBJ)
	@$(CC) $(OBJ) $(CFLAGS) -o $(NAME)

clean:
	@$(RM) -rf obj

fclean: clean
	@$(RM) -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re
