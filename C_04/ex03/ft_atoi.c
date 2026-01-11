/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llarrive <llarrive@student.42vienna.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/29 17:28:34 by llarrive          #+#    #+#             */
/*   Updated: 2025/08/04 17:08:59 by llarrive         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	sign;
	int	l;

	l = 0;
	sign = 1;
	while (*str == ' ' || (9 <= *str && *str <= 13))
		str++;
	while (*str == '+' || *str == '-')
	{
		if (*str == '-')
			sign = -sign;
		str++;
	}
	while ('0' <= *str && *str <= '9')
	{
		l = l * 10 + (*str - '0');
		str++;
	}
	return (sign * l);
}

#include <stdlib.h>
#include <stdio.h>

int	main(int argc, char *argv[])
{
	char	*input;

	if (argc != 2)
	{
		printf("input is not correct\n");
		return (1);
	}
	input = argv[1];
	printf("atoi fc output :%d\n", atoi(input));
	printf("integer output :%d\n", ft_atoi(input));
	return (0);
}
