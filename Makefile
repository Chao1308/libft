# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: clin-yan <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/05 12:33:52 by clin-yan          #+#    #+#              #
#    Updated: 2024/10/08 12:32:30 by clin-yan         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

LIB = ar rcs
RM = rm -f


CC = gcc
CCFLAGS = -Wall -Wextra -Werror

NAME = libft.a

LIB = ar rcs
RM = rm -f
CC = gcc
CCFLAGS = -Wall -Wextra -Werror
NAME = libft.a
SRC = ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_strdup.c\
      ft_isprint.c ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c\
      ft_strlcpy.c ft_strlcat.c ft_toupper.c ft_tolower.c ft_strchr.c ft_strrchr.c\
      ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c ft_atoi.c ft_calloc.c\
      ft_substr.c ft_strjoin.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c\
      ft_putnbr_fd.c ft_strtrim.c ft_itoa.c ft_strmapi.c ft_striteri.c ft_split.c
OBJ = $(SRC:.c=.o)
INCLUDE = libft.h

all: $(NAME)

$(NAME): $(OBJ)
	$(LIB) $(NAME) $(OBJ)

%.o: %.c $(INCLUDE)
	$(CC) $(CCFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
