/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llarrive <llarrive@student.42vienna.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/31 18:37:24 by llarrive          #+#    #+#             */
/*   Updated: 2025/08/01 10:51:44 by llarrive         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	if (index == 0)
		return (0);
	if (index == 1)
		return (1);
	while (index > 1)
		return (ft_fibonacci(index - 1) + ft_fibonacci(index -2));
	return (0);
}
/*
#include <stdio.h>

int	main(void)
{
	int index;
	
	index = -5;
	printf("the %d-th element of the Fibonacci 
	sequence is : %d\n", index, ft_fibonacci(index));
	return(0);
}

to check:
Index :     0   1   2   3   4   5   6    7    8    9   10   11
Valeur :    0,  1,  1,  2,  3,  5,  8,  13,  21,  34,  55,  89
*/
