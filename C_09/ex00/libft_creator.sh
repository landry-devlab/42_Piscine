# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    libft_creator.sh                                   :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: llarrive <llarrive@student.42vienna.c      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/08/06 18:17:33 by llarrive          #+#    #+#              #
#    Updated: 2025/08/06 18:17:55 by llarrive         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#!/bin/bash

cc -Wall -Wextra -Werror ft_putchar.c ft_swap.c ft_putstr.c ft_strlen.c ft_strcmp.c

ar rcs libft.a ft_putchar.o ft_swap.o ft_putstr.o ft_strlen.o ft_strcmp.o

rm -f *.o


# cc -Wall -Wextra -Werror *.c
# ar rcs libft.a *.o

