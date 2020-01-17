# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aroque <aroque@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/01/17 10:00:52 by aroque            #+#    #+#              #
#    Updated: 2020/01/17 13:13:06 by aroque           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	do-op

CC			=	gcc
CC_FLAGS	=	-Wall	\
				-Wextra	\
				-Werror

INCLUDE	=	./include

SRC_DIR	=	./src
SRC		=	${SRC_DIR}/do-op.c		\
			${SRC_DIR}/ft_math.c	\
			${SRC_DIR}/ft_atoi.c	\
			${SRC_DIR}/ft_putstr.c	\
			${SRC_DIR}/ft_putnbr.c	\
			${SRC_DIR}/ft_strlen.c

OBJ_DIR	=	./build
OBJ		=	$(patsubst $(SRC_DIR)/%.c, $(OBJ_DIR)/%.o, $(SRC))

all: ${NAME}

${NAME}: ${OBJ}
	${CC} $^ -o $@

${OBJ_DIR}/%.o: ${SRC_DIR}/%.c
	${CC} ${CC_FLAGS} -I${INCLUDE} -c $< -o $@

clean:
	rm -f ${OBJ}

fclean: clean
	rm -f ${NAME}

re: fclean all
