/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nboer <nboer@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/27 19:14:53 by nboer             #+#    #+#             */
/*   Updated: 2024/04/28 20:19:21 by nboer            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

void	ft_memset(void *str, int c, size_t n)
{
	unsigned char	*p;

	p = str;
	while (n > 0)
	{
		*p = c;
		p++;
		n--;
	}
}
/*
#include <string.h>
#include <stdio.h>

int	main(void)
{
	unsigned char str[4];
	ft_memset(str, 'A', 4);
	printf("%s\n", str);
	return (0);
}

b0      b1      b2      b3
0-255   0-255   0-255   0-255
* 255^3 * 255^2 * 255   * 1
*/
