# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aroque <aroque@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/12/31 16:36:57 by aroque            #+#    #+#              #
#    Updated: 2019/12/31 18:42:44 by aroque           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME    = libft.a

LIB_DIR = ./includes
SRC_DIR = ./srcs
SRC     = ${SRC_DIR}/ft_putchar.c \
          ${SRC_DIR}/ft_putstr.c  \
          ${SRC_DIR}/ft_swap.c    \
          ${SRC_DIR}/ft_strlen.c  \
          ${SRC_DIR}/ft_strcmp.c  \

OBJ_DIR = ./srcs
OBJ		= $(patsubst $(SRC_DIR)/%.c, $(OBJ_DIR)/%.o, $(SRC))

CC      = gcc
CC_FLAGS= -Wall   \
          -Wextra \
          -Werror \
          -I${LIB_DIR}

all: ${NAME}

${NAME}: ${OBJ}
	ar rcs $@ $^ 

${OBJ_DIR}/%.o: ${SRC_DIR}/%.c
	${CC} ${CC_FLAGS} -c -o $@ $<

clean:
	rm -rf ${OBJ}

fclean: clean
	rm -rf ${NAME}

re: fclean all
