/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llarrive <llarrive@student.42vienna.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/24 17:30:22 by llarrive          #+#    #+#             */
/*   Updated: 2025/08/03 15:30:10 by llarrive         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	if (!str)
		return (0);
	i = 0;
	while (*str)
	{
		i++;
		str++;
	}
	return (i);
}
/*

#include <stdio.h>

int	main(void)
{
	char	*str = NULL;
	printf("input : %s\n", str);
	printf("number of caracters is :%i", ft_strlen(str));
	return (0);
}*/
