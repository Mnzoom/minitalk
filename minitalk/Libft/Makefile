# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mngoie <mngoie@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/06 16:13:38 by mngoie            #+#    #+#              #
#    Updated: 2023/11/10 11:40:34 by mngoie           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CC = gcc
CFLAGS = -Wall -Wextra -Werror -I
RM = rm -f 
OBJ = $(SRC: .c=.o)
SRC = ./ft_strlen.c 
	

$(NAME): $(OBJ)
	gcc -o $(NAME) $(OBJ)

all: $(NAME)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: clean all 

.PHONY: all clean fclean re