/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nboer <nboer@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/28 16:05:07 by nboer             #+#    #+#             */
/*   Updated: 2024/04/28 20:25:20 by nboer            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

void	ft_memcpy(void *dest, const void *src, size_t n)
{
	char		*c_dest;
	const char	*c_src;	
	size_t		i;

	c_dest = dest;
	c_src = src;
	i = 0;
	while (i < n)
	{
		c_dest[i] = c_src[i];
		i++;
	}
}
/*
#include <stdio.h>
int	main(void)
{
	char src[] = "Hello World";
	char dest[20];
	ft_memcpy(dest, src, 5);
	printf("%s", dest);
	return(0);
}
*/
