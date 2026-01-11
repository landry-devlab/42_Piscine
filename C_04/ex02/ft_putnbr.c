/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llarrive <llarrive@student.42vienna.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/24 18:21:15 by llarrive          #+#    #+#             */
/*   Updated: 2025/07/29 15:42:24 by llarrive         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_power10(int n)
{
	if (n == 0)
		return (1);
	return (10 * ft_power10(n - 1));
}

int	ft_countdigit(int n)
{
	int	digit;

	if (n == 0)
		return (1);
	digit = 0;
	if (n < 0)
		n = -n;
	while (n > 0)
	{
		n = n / 10;
		digit++;
	}
	return (digit);
}

void	ft_putnbr(int nb)
{
	int		nb_digit;
	int		digit;
	char	a;

	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if (nb < 0)
	{
		write(1, "-", 1);
		nb = -nb;
	}
	nb_digit = ft_countdigit(nb);
	while (nb_digit > 0)
	{
		digit = nb / ft_power10(nb_digit - 1);
		nb = nb - (ft_power10(nb_digit - 1) * digit);
		a = '0' + digit;
		write(1, &a, 1);
		nb_digit--;
	}
}
/*
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
	int nb;
	
	if (argc != 2)
	{	printf("please write only one string argument\n");
		return (1);
	}

	write(1, "answer:", 7);
	nb = atoi(argv[1]);
	ft_putnbr(nb);
	
	return (0);
	
}*/
