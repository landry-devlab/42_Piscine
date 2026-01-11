/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llarrive <llarrive@student.42vienna.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/29 18:50:15 by llarrive          #+#    #+#             */
/*   Updated: 2025/08/02 20:42:30 by llarrive         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *base)
{
	int	i;

	i = 0;
	while (base[i])
		i++;
	return (i);
}

int	ft_is_base_valid(char *base, int length)
{
	int	i;
	int	j;

	i = 0;
	if (base[0] == '\0')
		return (0);
	while (base[i] != '\0')
	{
		if (base[i] == '+' || base[i] == '-' || base[i] == ' ')
			return (0);
		i++;
	}
	i = 0;
	while (i < length - 1)
	{
		j = i + 1;
		while (j < length)
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

void	ft_print_nbr(long long_nb, int length, char *base)
{
	char	c;

	if (long_nb < 0)
	{
		write(1, "-", 1);
		long_nb = -long_nb;
	}
	if (long_nb >= length)
		ft_print_nbr((long_nb / length), length, base);
	c = base[long_nb % length];
	write(1, &c, 1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	long	long_nb;
	int		length;

	long_nb = nbr;
	length = ft_strlen(base);
	if (length < 2)
		return ;
	if (ft_is_base_valid(base, length) == 0)
		return ;
	ft_print_nbr(long_nb, length, base);
}
/*
int	main(void)
{
	char	*base;
	int		nbr;

	base = "0123456789ABCDEF";
	nbr = 123456;
	ft_putnbr_base(nbr, base);
	return (0);
}
// 2147483647
// -2147483648
*/
