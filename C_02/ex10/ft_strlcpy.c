/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llarrive <llarrive@student.42vienna.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/26 14:38:25 by llarrive          #+#    #+#             */
/*   Updated: 2025/07/31 08:54:40 by llarrive         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	len_src;
	unsigned int	i;

	len_src = 0;
	while (src[len_src])
		len_src++;
	if (size == 0)
		return (len_src);
	i = 0;
	while ((i < (size - 1)) && (src[i]))
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (len_src);
}
/*


#include <stdio.h>

int	main(void)
{
	char		dest[10] = "abcde";
	char		src[15] = "fghiiiiiiiiiiij";
	unsigned int    size = 7;
    unsigned int    sizeSrc;

	printf("before : %s\n", dest);
	
	sizeSrc = ft_strlcpy(dest, src, size);
	
	printf("after: %s\n", dest);
    printf("return value(size of source) is : %i\n", sizeSrc);
	
	return (0);
	
} */
