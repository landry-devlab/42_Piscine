/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llarrive <llarrive@student.42vienna.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/23 14:20:18 by llarrive          #+#    #+#             */
/*   Updated: 2025/07/23 14:20:24 by llarrive         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	while (dest[i])
		i++;
	j = 0;
	while (src[j])
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (dest);
}
/*

#include <stdio.h>

int	main(void)
{
	char		src1[50] = "abcd";
	char		src2[] = "efg";

	printf("After : %s\n", src1);
	
	ft_strcat(src1 ,src2);
	
	printf("Before : %s\n", src1);
	
	return (0);
	
}
*/
