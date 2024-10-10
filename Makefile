# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aelaaser <aelaaser@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/10 19:14:13 by aelaaser          #+#    #+#              #
#    Updated: 2024/10/10 19:31:36 by aelaaser         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


# Compiler and flags
CC = gcc
CFLAGS = -Wall -Werror -Wextra

# Source files
SRCS = $(wildcard *.c) # Use wildcard function to get all .c files
# Object files (generated from source files)
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
