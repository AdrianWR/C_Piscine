# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aroque <aroque@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/01/02 00:25:30 by aroque            #+#    #+#              #
#    Updated: 2020/01/02 12:30:49 by aroque           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ft_display_file

CC			=	gcc
CC_FLAGS	=	-Wall	\
				-Wextra	\
				-Werror
LD_FLAGS 	=

LIB_DIR = ./includes
SRC_DIR = ./srcs
OBJ_DIR = ./build

SRC		= ${SRC_DIR}/ft_display_file.c
OBJ		= $(patsubst $(SRC_DIR)/%.c, $(OBJ_DIR)/%.o, $(SRC))

all: ${NAME}

$(NAME): ${OBJ}
	${CC} ${LD_FLAGS} $^ -o $@

$(OBJ_DIR)/%.o: ${SRC_DIR}/%.c
	${CC} ${CC_FLAGS} -c $< -I${LIB_DIR} -o $@

clean:
	rm -f ${OBJ}

fclean: clean
	rm -f ${NAME}
