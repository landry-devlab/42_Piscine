/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llarrive <llarrive@student.42vienna.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/03 16:23:06 by llarrive          #+#    #+#             */
/*   Updated: 2025/08/04 12:05:32 by llarrive         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int		*tab;
	long	len;

	len = max - min;
	if (len <= 0)
		return (NULL);
	tab = malloc(sizeof(int) * len);
	if (tab == NULL)
		return (NULL);
	while (len > 0)
	{
		tab[len - 1] = max - 1;
		max--;
		len--;
	}
	return (tab);
}
/*
#include <stdio.h>

int	main(int ac, char **av)
{
	int	min;
	int	max;
	int	*tab;
	long	i;
	
	if (ac != 3)
	{
		printf("please enter 2 numbers min and max\n");
		return (1);
	}
	min = atoi(av[1]);
	max = atoi(av[2]);
	tab = ft_range(min, max);
	i = 0;
	if (tab == NULL)
	{
		printf("min is greater than or equal to max - NULL pointer return\n");
		return (0);
	}
	else
	{
		printf("here the array\n");
		while (i < (max - min))
		{
			printf("%d\n", tab[i]);
			i++;
		}
	}
	free(tab);
	tab = NULL;
	return (0);
}
*/
