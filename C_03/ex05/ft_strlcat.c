/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llarrive <llarrive@student.42vienna.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/24 13:58:03 by llarrive          #+#    #+#             */
/*   Updated: 2025/07/24 13:58:16 by llarrive         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, const char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	lsrc;
	unsigned int	ldst;

	i = 0;
	lsrc = ft_strlen(src);
	ldst = ft_strlen(dest);
	if (size <= ldst)
		return (size + lsrc);
	else
	{
		while (src[i] && (i + ldst) < (size - 1))
		{
			dest[ldst + i] = src[i];
			i++;
		}
		dest[ldst + i] = '\0';
		return (ldst + lsrc);
	}
}