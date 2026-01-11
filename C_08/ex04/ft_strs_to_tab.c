/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llarrive <llarrive@student.42vienna.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/05 19:18:30 by llarrive          #+#    #+#             */
/*   Updated: 2025/08/06 09:47:09 by llarrive         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (*str)
	{
		i++;
		str++;
	}
	return (i);
}

char	*ft_strdup(char *src)
{
	int		len;
	char	*src_copy;

	if (!src)
		return (NULL);
	len = 0;
	while (src[len] != '\0')
	{
		len++;
	}
	src_copy = malloc(sizeof(char) * (len + 1));
	if (!src_copy)
		return (NULL);
	len = 0;
	while (src[len] != '\0')
	{
		src_copy[len] = src[len];
		len++;
	}
	src_copy[len] = '\0';
	return (src_copy);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str	*array;
	int			i;

	array = malloc((sizeof(t_stock_str) * (ac + 1)));
	if (array == NULL)
		return (NULL);
	i = 0;
	while (i < ac)
	{
		array[i].size = ft_strlen(av[i]);
		array[i].str = av[i];
		array[i].copy = ft_strdup(av[i]);
		if (array[i].copy == NULL)
		{
			free(array);
			return (NULL);
		}
		i++;
	}
	array[ac].str = 0;
	return (array);
}
