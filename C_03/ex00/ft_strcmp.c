/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llarrive <llarrive@student.42vienna.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/23 12:03:08 by llarrive          #+#    #+#             */
/*   Updated: 2025/07/23 12:03:53 by llarrive         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (((s1[i]) == (s2[i])) && (s1[i]) && (s2[i]))
		i++;
	return (((unsigned char)s1[i]) - (unsigned char)s2[i]);
}
/*

#include <stdio.h>

int	main(void)
{
	int	b;
	char	*src1 = "text " ;
	char	*src2 = "tAxt " ;

	b = 0;
	
	b = ft_strcmp(src1, src2);
	
	if (b == 0)
		printf("The 2 input sources are the same.\n");
	else if (b > 0)
		printf("Sources difference- Ascii's value from 1st source bigger.\n");
	else
		printf("Sources difference- Ascii's value from 2nd source bigger.\n");

	return (0);
	
}
*/
