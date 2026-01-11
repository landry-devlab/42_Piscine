# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: llarrive <llarrive@student.42vienna.c      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/08/06 17:55:15 by llarrive          #+#    #+#              #
#    Updated: 2025/08/06 17:55:18 by llarrive         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc

CFLAGS = -Wall -Wextra -Werror

SRCS = ./srcs/*.c

OBJS = $(SRCS:.c=.o)

NAME = libft.a

all : $(NAME)

$(NAME) : $(OBJS)
	ar rcs $(NAME) $(OBJS)

%.o: %.c
	$(CC) $(CFLAGS) -I ./includes -c $< -o $@

clean : 
	rm -rf $(OBJS)

fclean : 
	rm -rf $(OBJS) $(NAME)

re : fclean all

.PHONY: all clean fclean re