/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llarrive <llarrive@student.42vienna.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/03 18:22:57 by llarrive          #+#    #+#             */
/*   Updated: 2025/08/04 10:45:14 by llarrive         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	long	len;
	long	i;

	len = max - min;
	*range = malloc(sizeof(int) * len);
	if (range == NULL)
		return (-1);
	if (len <= 0)
	{
		*range = NULL;
		return (0);
	}
	i = 0;
	while (i < len)
	{
		(*range)[i] = min;
		min++;
		i++;
	}
	return (len);
}
/*
#include <stdio.h>

int	main(int ac, char **av)
{
	int		min;
	int		max;
	int		*range = NULL;
	long	i;
	int		nb;

	if (ac != 3)
	{
		printf("please enter 2 numbers min and max\n");
		return (1);
	}
	min = atoi(av[1]);
	max = atoi(av[2]);
	nb = ft_ultimate_range(&range, min, max);
	printf("return is : %d\n", nb);
	i = 0;
	if (nb == -1)
		printf("problem with malloc\n");
	else if (nb == 0)
		printf("len <=0. Pointer point to NULL\n");
	else
	{
		printf("here the array\n");
		while (i < (max - min))
		{
			printf("%d\n", range[i]);
			i++;
		}
	}
	free(range);
	range = NULL;
	return (0);
}
*/
