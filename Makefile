# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lballiot <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/11/13 10:48:12 by lballiot          #+#    #+#              #
#    Updated: 2017/11/13 11:33:27 by lballiot         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
SRC = ./srcs/ft_strlen.c \
	  ./srcs/ft_strdup.c 
CC = gcc
OBJ = $(SRC:.c=.o)
CFLAGLS = -Wall -Werror -Wextra
HEADERS = ./libft.h 
RM = rm -rf

all = $(NAME)

$(NAME) = $(OBJ)
	ar rc $(NAME) $(OBJ) $(HEADERS)
	ranlib $(NAME)

clean :
	$(RM) $(OBJ)

fclean : clean
	$(RM) $(NAME)

re : fclean all
