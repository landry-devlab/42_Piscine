/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llarrive <llarrive@student.42vienna.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/20 09:00:51 by llarrive          #+#    #+#             */
/*   Updated: 2025/07/20 20:23:29 by llarrive         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void)
{
	char	hundreds;
	char	tens;
	char	units;

	hundreds = '0';
	while (hundreds <= '7')
	{
		tens = hundreds + 1;
		while (tens <= '8')
		{
			units = tens + 1;
			while (units <= '9')
			{
				write(1, &hundreds, 1);
				write(1, &tens, 1);
				write(1, &units, 1);
				if (!(hundreds == '7' && tens == '8' && units == '9'))
					write(1, ", ", 2);
				units++;
			}
			tens++;
		}
		hundreds++;
	}
}
