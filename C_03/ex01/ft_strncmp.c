/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llarrive <llarrive@student.42vienna.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/23 13:41:35 by llarrive          #+#    #+#             */
/*   Updated: 2025/07/23 13:41:39 by llarrive         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	if (n == 0)
		return (0);
	i = 0;
	while ((i < n) && (s1[i]) && (s2[i]) && (s1[i]) == (s2[i]))
		i++;
	if (i == n)
		return (0);
	return (((unsigned char)s1[i]) - (unsigned char)s2[i]);
}
/*
#include <stdio.h>

int	main(void)
{
	int		b;
	char		*src1 = "textblABla" ;
	char		*src2 = "text" ;
	unsigned int	n = 5 ;

	b = 0;
	
	b = ft_strncmp(src1, src2, n);
	
	if (b == 0)
    {
       printf("The 2 input sources are the same.\n");
       printf("retunr = %i\n", b);
    }
	else if (b > 0)
    {
		printf("Sources difference- Ascii's value from 1st source bigger.\n");
        printf("retunr = %i\n", b);
   }

    else
    {
		printf("Sources difference- Ascii's value from 2st source bigger.\n");
        printf("retunr = %i\n", b);
    }
}*/
