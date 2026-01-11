/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llarrive <llarrive@student.42vienna.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/20 09:27:03 by llarrive          #+#    #+#             */
/*   Updated: 2025/07/20 11:55:20 by llarrive         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_digit(int a)
{
	char	c1;
	char	c2;

	if (a < 10)
	{
		c1 = '0';
		c2 = a + '0';
	}
	else
	{
		c1 = (a / 10) + '0';
		c2 = (a % 10) + '0';
	}
	write(1, &c1, 1);
	write(1, &c2, 1);
}

void	ft_print_comb2(void)
{
	int	num1;
	int	num2;

	num1 = 0;
	while (num1 <= 98)
	{
		num2 = 1 + num1;
		while (num2 <= 99)
		{
			if (num1 != num2)
			{
				ft_print_digit(num1);
				write(1, " ", 1);
				ft_print_digit(num2);
				if (!(num1 == 98 && num2 == 99))
					write(1, ", ", 2);
			}
			num2++;
		}
		num1++;
	}
}
