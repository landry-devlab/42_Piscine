/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llarrive <llarrive@student.42vienna.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/01 10:12:36 by llarrive          #+#    #+#             */
/*   Updated: 2025/08/01 10:12:39 by llarrive         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;

	if (nb < 2)
		return (0);
	i = nb - 1;
	while (i > 1)
	{
		if (nb % i == 0)
			return (0);
		else
			i--;
	}
	return (1);
}
/*
#include <stdio.h>
#include <stdlib.h>

int	main(int ac, char *av[])
{
	int	answer;

	if (ac != 2)
	{
		printf("please enter a number\n");
		return (1);
	}
	answer = ft_is_prime(atoi(av[1]));
	if (answer == 1)
		printf("return 1: Input number is prime number");
	if (answer == 0)
		printf("return 0:Input number is not prime number");
	return (0);
}

Nombre premier :
2, 3, 5, 7, 11, 13, 17, 19, 23, 29,  
31, 37, 41, 43, 47, 53, 59, 61, 67, 71
*/
