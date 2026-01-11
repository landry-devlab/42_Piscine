/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llarrive <llarrive@student.42vienna.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/06 12:45:02 by llarrive          #+#    #+#             */
/*   Updated: 2025/08/06 14:46:08 by llarrive         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	temp;

	i = 0;
	while (i < size)
	{
		j = i + 1;
		while (j < size)
		{
			if (tab[i] > tab[j])
			{
				temp = tab[i];
				tab[i] = tab[j];
				tab[j] = temp;
			}
			j++;
		}
		i++;
	}
}
/*
#include <unistd.h>

int	main(void)
{
	int	tab[6];
	int	j;
	char	c;

	tab[0] = 2;
	tab[1] = 1;
	tab[2] = 7;
	tab[3] = 4;
	tab[4] = 5;
	tab[5] = 3;

	ft_sort_int_tab(tab, 6);
	j = 0;
	while (j < 6)
	{
		c = '0' + tab[j];
		write(1, &c, 1);
		write(1, " ", 1);
		j++;
	}
	return (0);
}*/
