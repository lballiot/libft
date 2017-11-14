# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lballiot <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/11/13 10:48:12 by lballiot          #+#    #+#              #
#    Updated: 2017/11/14 15:24:58 by lballiot         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC = ./srcs/ft_strlen.c \
	  ./srcs/ft_strdup.c \
	  ./srcs/ft_isalpha.c \
	  ./srcs/ft_isdigit.c \
	  ./srcs/ft_isalnum.c \
	  ./srcs/ft_isascii.c \
	  ./srcs/ft_isprint.c \
	  ./srcs/ft_toupper.c \
	  ./srcs/ft_tolower.c \
	  ./srcs/ft_strcmp.c \
	  ./srcs/ft_strncmp.c \
	  ./srcs/ft_strstr.c \
	  ./srcs/ft_strcpy.c \
	  ./srcs/ft_strnstr.c \
	  ./srcs/ft_strrchr.c \
	  ./srcs/ft_strcat.c \
	  ./srcs/ft_strclr.c

OBJ = $(SRC:.c=.o)

CC = gcc

CFLAGLS = -Wall -Werror -Wextra

HPATH = -I includes/libft.h

RM = rm -rf

$(NAME) : $(OBJ)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)

clean :
	$(RM) $(OBJ)

fclean : clean
	$(RM) $(NAME)

re : fclean all

all : $(NAME)
