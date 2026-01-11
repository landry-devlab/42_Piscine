/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llarrive <llarrive@student.42vienna.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/31 18:52:44 by llarrive          #+#    #+#             */
/*   Updated: 2025/07/31 18:53:09 by llarrive         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	i;

	if (nb <= 0)
		return (0);
	i = 0;
	while ((i * i) < nb)
		i++;
	if ((i * i) == nb)
		return (i);
	else
		return (0);
}
/*
#include <stdio.h>

int	main(void)
{
	int	sqrt;

	sqrt = 121;
	printf("the sqrt of %d is %d\n", sqrt, ft_sqrt(sqrt));
	return (0);
}

to check:
| Nombre        | 0 | 1 | 4 | 9 | 16 | 25 |
| ------------- | - | - | - | - | -- | -- |
| Racine carrée | 0 | 1 | 2 | 3 | 4  | 5  | 

 36 | 49 | 64 | 81 | 100 | 121 | 144 | 169 | 196 |
 -- | -- | -- | -- | --- | --- | --- | --- | --- |
 6  | 7  | 8  | 9  | 10  | 11  | 12  | 13  | 14  |

*/
