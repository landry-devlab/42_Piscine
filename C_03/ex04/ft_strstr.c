/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strstr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llarrive <llarrive@student.42vienna.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/23 18:03:24 by llarrive          #+#    #+#             */
/*   Updated: 2025/07/24 13:44:43 by llarrive         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (to_find[j] == '\0')
		return (&str[i]);
	while (str[i] != '\0')
	{
		j = 0;
		if (str[i] == to_find[j])
		{
			while ((str[i + j] == to_find[j]) && (to_find[j] != '\0'))
			{
				j++;
			}
			if (to_find[j] == '\0')
				return (&str[i]);
		}
		i++;
	}
	return (0);
}
/*


#include <stdio.h>
int	main(void)
{
	char		str[50] = "Hello wor world";
	char		to_find[] = "world";
	
	printf("%p", ft_strstr(str, to_find));
	
	return (0);
	
}
*/
