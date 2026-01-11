/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llarrive <llarrive@student.42vienna.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/03 14:25:50 by llarrive          #+#    #+#             */
/*   Updated: 2025/08/03 16:20:31 by llarrive         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		len;
	char	*src_copy;

	if (!src)
		return (0);
	len = 0;
	while (src[len] != '\0')
	{
		len++;
	}
	src_copy = malloc(sizeof(char) * (len + 1));
	if (!src_copy)
		return (0);
	len = 0;
	while (src[len] != '\0')
	{
		src_copy[len] = src[len];
		len++;
	}
	src_copy[len] = '\0';
	return (src_copy);
}
/*
#include <stdio.h>

int	main(void)
{
	char	*src = "hello world";
	char	*duplicate;

	duplicate = ft_strdup(src);
	printf("%s\n", duplicate);
	free(duplicate);
}*/
