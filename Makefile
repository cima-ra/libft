# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: adricima <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/14 11:51:51 by adricima          #+#    #+#              #
#    Updated: 2022/11/14 11:51:56 by adricima         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= libft.a

CC = gcc

FLAGS = -Wall -Werror -Wextra

SRC	= ft_isdigit.c  ft_memset.c   ft_strncmp.c \
	  ft_atoi.c     ft_isprint.c  ft_strchr.c  \
	ft_bzero.c    ft_memchr.c   ft_strjoin.c  ft_strrchr.c \
	ft_isalnum.c  ft_memcmp.c   ft_strlcat.c  ft_substr.c \
	ft_isalpha.c  ft_memcpy.c   ft_strlcpy.c  ft_tolower.c \
	ft_isascii.c  ft_memmove.c  ft_strlen.c   ft_toupper.c \
	ft_strnstr.c  ft_calloc.c  ft_strdup.c  ft_strtrim.c \
	ft_itoa.c  ft_strmapi.c  ft_striteri.c  ft_split.c \
	ft_putchar_fd.c  ft_putstr_fd.c  ft_putendl_fd.c  ft_putnbr_fd.c

OBJ	= $(SRC:.c=.o)

all:	$(NAME)

$(NAME) : $(SRC)
	@gcc -Wall -Werror -Wextra -c $(SRC)
	@ar rc $(NAME) $(OBJ)

clean:
	@rm -f $(OBJ)

fclean: clean
	@rm -f $(NAME)

re: fclean all
