# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aelaaser <aelaaser@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/10 19:14:13 by aelaaser          #+#    #+#              #
#    Updated: 2024/10/16 19:07:31 by aelaaser         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


# Compiler and flags
CC = gcc
CFLAGS = -Wall -Werror -Wextra

# Source files
SRCS = 	ft_atoi.c ft_calloc.c ft_isalpha.c ft_isdigit.c ft_itoa.c ft_memcmp.c ft_memmove.c ft_putchar_fd.c ft_putstr_fd.c ft_strchr.c ft_strjoin.c ft_strlcpy.c ft_strncmp.c ft_strrchr.c ft_supstr.c ft_toupper.c ft_bzero.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_memchr.c ft_memcpy.c ft_memset.c ft_putnbr_fd.c ft_split.c ft_strdup.c ft_striteri.c ft_strlcat.c ft_strlen.c ft_strmapi.c ft_strnstr.c ft_strtrim.c ft_tolower.c

OBJS = $(SRCS:.c=.o)
# Library name
NAME = libft.a

# Default target
all: $(NAME)

# Rule to create the static library
$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

# Clean up build files
clean:
	rm -f $(OBJS)

fclean: clean
	 rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
