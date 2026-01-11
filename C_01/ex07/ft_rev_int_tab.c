/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llarrive <llarrive@student.42vienna.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/20 18:59:52 by llarrive          #+#    #+#             */
/*   Updated: 2025/07/21 13:05:45 by llarrive         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	temp;
	int	n;

	n = 0;
	while (n < (size / 2))
	{
		temp = tab[n];
		tab[n] = tab[size - 1 - n];
		tab[size - 1 - n] = temp;
		n++;
	}
}
