/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llarrive <llarrive@student.42vienna.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/28 17:25:15 by llarrive          #+#    #+#             */
/*   Updated: 2025/07/31 21:07:45 by llarrive         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	resultat;

	if (power < 0)
		return (0);
	if (power == 0 || nb == 0)
		return (1);
	resultat = nb;
	while (power > 1)
	{
		resultat = resultat * nb;
		power--;
	}
	return (resultat);
}
/*
#include <stdio.h>
#include <stdlib.h>

int	main(int argc, char *argv[])
{
	int	nb;
	int 	power;

	if (argc != 3)
	{
		printf("error, an integer need to be input\n");
		return (1);
	}
	nb = atoi(argv[1]);
	power = atoi(argv[2]);
	printf("%i raise at power of %i gives: %i.\n",
	nb, power, ft_iterative_power(nb, power));
	return (0);
}*/
