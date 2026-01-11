/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llarrive <llarrive@student.42vienna.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/31 20:21:19 by llarrive          #+#    #+#             */
/*   Updated: 2025/07/31 21:06:05 by llarrive         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;

	if (nb == 1 || nb == 0)
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

int	ft_find_next_prime(int nb)
{
	int	j;

	if (nb < 2)
		return (2);
	j = 0;
	while (ft_is_prime(nb + j) == 0)
		j++;
	return (nb + j);
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
	answer = ft_find_next_prime(atoi(av[1]));
	printf("Input number is %s. The next 
	prime number is %d\n", av[1], answer);
	return (0);
}

Nombre premier :
2, 3, 5, 7, 11, 13, 17, 19, 23, 29,  
31, 37, 41, 43, 47, 53, 59, 61, 67, 71
*/
