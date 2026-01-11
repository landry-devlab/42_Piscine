/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llarrive <llarrive@student.42vienna.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/23 16:28:04 by llarrive          #+#    #+#             */
/*   Updated: 2025/07/23 16:28:09 by llarrive         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	while (dest[i])
		i++;
	j = 0;
	while ((src[j]) && (j < nb))
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
	char		src1[50] = "abcde";
	char		src2[] = "fghij";
	unsigned int	n = 3;

	printf("After : %s\n", src1);
	
	ft_strncat(src1 ,src2, n);
	
	printf("Before : %s\n", src1);
	
	return (0);
	
}
*/
