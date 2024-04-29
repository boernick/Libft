/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nboer <nboer@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/28 18:33:31 by nboer             #+#    #+#             */
/*   Updated: 2024/04/29 13:22:04 by nboer            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, char *src, size_t size)
{
	size_t	i;
	size_t	j;	

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;
	if (size < i)
		return (size);
	else if (size > i)
	{
		while (src[j] != '\0' && ((i + j) < (size - 1)))
		{
			dest[i + j] = src[j];
			j++;
		}
		dest[i + j] = '\0';
	}
	return (i + j);
}
/*
#include <stdio.h>
int main(void)
{
    char src[] = "test";
    char dest[] = "";
    int res = ft_strlcat(dest, src, 12);
    printf("%d", res);
    return (0);
}*/
