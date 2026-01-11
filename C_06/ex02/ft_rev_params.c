/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llarrive <llarrive@student.42vienna.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/01 11:59:50 by llarrive          #+#    #+#             */
/*   Updated: 2025/08/01 11:59:52 by llarrive         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int ac, char **av)
{
	int		i;
	int		j;
	char	c;

	i = 0;
	while (i < ac)
		i++;
	while (i > 1)
	{
		j = 0;
		while (av[i - 1][j] != '\0')
		{
			c = av[i - 1][j];
			write(1, &c, 1);
			j++;
		}
		write(1, "\n", 1);
		i--;
	}
	return (0);
}
