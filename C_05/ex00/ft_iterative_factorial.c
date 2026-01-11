/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llarrive <llarrive@student.42vienna.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/28 15:25:09 by llarrive          #+#    #+#             */
/*   Updated: 2025/08/01 10:51:05 by llarrive         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	resultat;

	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	resultat = 1;
	while (nb > 0)
	{
		resultat = resultat * (nb);
		nb--;
	}
	return (resultat);
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
	printf("factorial of %i is %i.\n", nb, ft_iterative_factorial(nb));
	return (0);
}*/
