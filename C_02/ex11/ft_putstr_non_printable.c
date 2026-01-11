/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llarrive <llarrive@student.42vienna.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/30 16:15:49 by llarrive          #+#    #+#             */
/*   Updated: 2025/07/30 16:15:53 by llarrive         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_hexa_non_printable(int c)
{
	char	*hexa;

	hexa = "0123456789abcdef";
	write(1, "\\", 1);
	write(1, &hexa[c / 16], 1);
	write(1, &hexa[c % 16], 1);
}

void	ft_putstr_non_printable(char *str)
{
	int		i;

	i = 0;
	while (str[i])
	{
		if ((unsigned char)str[i] < 32 || 126 < (unsigned char)str[i])
			ft_print_hexa_non_printable((unsigned char)str[i]);
		else
			write(1, &str[i], 1);
		i++;
	}
}
/*

#include <stdio.h>

int main(void)
{
	char	*input;

	input = "Some\0arandom\09text\0fwith\0anon-printable\0dcharacters";
	printf("%s\n", input);
	ft_putstr_non_printable(input);
	return (0);
} */
