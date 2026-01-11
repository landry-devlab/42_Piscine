/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llarrive <llarrive@student.42vienna.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/01 20:07:14 by llarrive          #+#    #+#             */
/*   Updated: 2025/08/02 13:01:49 by llarrive         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_strcmp_and_swap(char **s1, char **s2);
void	ft_swap_str(char **str1, char **str2);
void	ft_print_arguments(char *av[], int ac);

int	main(int ac, char **av)
{
	int	i;
	int	j;

	if (ac == 1)
		return (0);
	else
	{
		i = 1;
		while (i < ac)
		{
			j = i + 1;
			while (j < ac)
			{
				ft_strcmp_and_swap(&av[i], &av[j]);
				j++;
			}
			i++;
		}
	}
	ft_print_arguments(av, ac);
	return (0);
}

void	ft_swap_str(char **str1, char **str2)
{
	char	*tmp;

	tmp = *str1;
	*str1 = *str2;
	*str2 = tmp;
}

void	ft_strcmp_and_swap(char **s1, char **s2)
{
	int	i;

	i = 0;
	while ((*s1)[i] == (*s2)[i] && (*s1)[i] && (*s2)[i])
		i++;
	if ((unsigned char)(*s1)[i] > (unsigned char)(*s2)[i])
		ft_swap_str (s1, s2);
}

void	ft_print_arguments(char *av[], int ac)
{
	int	i;
	int	j;

	i = 1;
	while (i < ac)
	{
		j = 0;
		while (av[i][j] != '\0')
		{
			write(1, &av[i][j], 1);
			j++;
		}
		i++;
		write (1, "\n", 1);
	}
}
