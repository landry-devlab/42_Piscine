/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llarrive <llarrive@student.42vienna.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/06 10:20:37 by llarrive          #+#    #+#             */
/*   Updated: 2025/08/06 11:13:59 by llarrive         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_stock_str.h"

void	ft_print_str(char *str)
{
	int	i;

	i = 0;
	if (str == 0)
		return ;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}

void	ft_print_nbr(int nb)
{
	char	c;

	if (nb == -2147483648)
		write(1, "-2147483648", 11);
	else
	{
		if (nb < 0)
		{
			write(1, "-", 1);
			nb = -nb;
		}
		if (nb >= 10)
			ft_print_nbr(nb / 10);
		c = nb % 10 + '0';
		write(1, &c, 1);
	}
}

void	ft_show_tab(struct s_stock_str *par)
{
	int	i;

	i = 0;
	while (par[i].str != 0)
	{
		ft_print_str(par[i].str);
		write(1, "\n", 1);
		ft_print_nbr(par[i].size);
		write(1, "\n", 1);
		ft_print_str(par[i].copy);
		write(1, "\n", 1);
		i++;
	}
}
