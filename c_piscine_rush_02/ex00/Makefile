# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aroque <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/12/08 07:22:57 by aroque            #+#    #+#              #
#    Updated: 2019/12/10 13:55:42 by aroque           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #
NAME=rush-02
CC=gcc
CC_FLAGS=-c			\
		 -Wall		\
		 -Werror	\
		 -Wextra	\

all: $(NAME)

$(NAME): main.o long_number.o hash_table.o ft_string.o
	$(CC) -o $(NAME) main.o long_number.o hash_table.o ft_string.o

main.o: main.c ft.h hash_table.h
	$(CC) $(CC_FLAGS) main.c

long_number.o: long_number.c ft.h hash_table.h
	$(CC) $(CC_FLAGS) long_number.c

hash_table.o: hash_table.c ft.h
	$(CC) $(CC_FLAGS) hash_table.c

ft_string.o: ft_string.c
	$(CC) $(CC_FLAGS) ft_string.c

clean:
	rm main.o long_number.o hash_table.o ft_string.o

fclean:
	rm $(NAME)
