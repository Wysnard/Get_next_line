# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vlay <vlay@student.42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/11/13 15:14:46 by vlay              #+#    #+#              #
#    Updated: 2017/12/03 21:10:20 by vlay             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

OBJ_PATH = obj/

CC = gcc

CFLAGS = -Wall -Wextra -Werror -Iincludes

SRCFILE = ft_atoi.c ft_bzero.c ft_isalnum.c ft_isalpha.c \
		ft_isascii.c ft_isdigit.c ft_islower.c ft_isupper.c \
		ft_isprint.c ft_itoa.c ft_memalloc.c ft_memccpy.c \
		ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memdel.c \
		ft_memmove.c ft_memset.c ft_putchar_fd.c ft_putchar.c \
		ft_putendl_fd.c ft_putendl.c ft_putnbr_fd.c ft_putnbr.c \
		ft_putstr_fd.c ft_putstr.c ft_strcat.c ft_strchr.c \
		ft_strclr.c ft_strcmp.c ft_strcpy.c ft_strdel.c \
		ft_strdup.c ft_strequ.c ft_striter.c ft_striteri.c \
		ft_strjoin.c ft_strlcat.c ft_strlen.c ft_strmap.c \
		ft_strmapi.c ft_strncat.c ft_strncmp.c ft_strncpy.c \
		ft_strnequ.c ft_strnew.c ft_strnstr.c ft_strrchr.c \
		ft_strsplit.c ft_strstr.c ft_strsub.c ft_strtrim.c \
		ft_tolower.c ft_toupper.c \
		ft_lstadd.c ft_lstdel.c \
		ft_lstdelall.c ft_lstdelone.c \
		ft_lstfrontbacksplit.c ft_lstiter.c \
		ft_lstlen.c ft_lstmap.c \
		ft_lstnew.c ft_lstpushadd.c \
		ft_lstrev.c ft_lstrotate.c \
		ft_dtoa.c ft_intlen.c\
		ft_power.c ft_print_bits.c \
		ft_strndup.c ft_strrev.c \
		ft_strtrijoin.c ft_swap.c \
		ft_utoa.c ft_strjoinfree.c \

SRC = $(SRCFILE)

OBJ = $(SRCFILE:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	ar rc $(NAME) $(OBJ)
	@ranlib $(NAME)

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -f $(NAME)

re:	fclean all
