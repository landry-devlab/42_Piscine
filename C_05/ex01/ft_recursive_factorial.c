/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llarrive <llarrive@student.42vienna.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/28 15:55:48 by llarrive          #+#    #+#             */
/*   Updated: 2025/07/28 17:24:31 by llarrive         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	while (nb > 0)
	{
		return (nb * ft_recursive_factorial(nb - 1));
		nb--;
	}
	return (0);
}
/*
#include <stdio.h>
#include <stdlib.h>

int	main(int argc, char *argv[])
{
	int	nb;

	if (argc != 2)
	{
		printf("error, an integer need to be input\n");
		return (1);
	}
	nb = atoi(argv[1]);
	printf("factorial of %i is %i.\n", nb, ft_recursive_factorial(nb));
	return (0);
}*/
