/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llarrive <llarrive@student.42vienna.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 18:16:49 by llarrive          #+#    #+#             */
/*   Updated: 2025/07/26 14:43:08 by llarrive         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_not_alphanumeric(char c)
{
	if ((!('a' <= c && c <= 'z')) && (!('A' <= c && c <= 'Z')))
		if (!('0' <= c && c <= '9'))
			return (1);
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	int		i;
	char	cl;
	char	pl;

	if (!str)
		return (str);
	if ('a' <= str[0] && str[0] <= 'z' )
		str[0] = str[0] - 32;
	i = 1;
	while (str[i] != '\0')
	{
		cl = str[i];
		pl = str[i - 1];
		if ('a' <= cl && cl <= 'z')
			if (ft_is_not_alphanumeric(pl) == 1)
				cl = cl - 32;
		if ('A' <= cl && cl <= 'Z')
			if (ft_is_not_alphanumeric(pl) == 0)
				cl = cl + 32;
		str[i] = cl;
		i++;
	}
	return (str);
}
/*

#include <stdio.h>

int main()
{
	char input[50] = "P1L.Bk3_ X0 X?H?Hlxho.C0]De@[Kb(H.]\n";
	printf("input is : %s\n", input);
	ft_strcapitalize(input);
	printf("what to expect:-P1l.Bk3_ X0 X?H?Hlxho.C0]De@[Kb(H.]^^\n");
	printf("output is ----: %s\n", input);
	return (0);
}*/
