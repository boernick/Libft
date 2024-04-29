/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nboer <nboer@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/27 15:29:15 by nboer             #+#    #+#             */
/*   Updated: 2024/04/29 15:08:07 by nboer            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	ft_strncmp(const char *str1, const char *str2, size_t n)
{
	size_t	i;
	size_t	j;

	i = 0;
	while ((str1[i] != '\0' || str2[i] != '\0') && i < n)
	{
		j = (unsigned char) str1[i] - (unsigned char) str2[i];
		if (j != 0)
			return (j);
		i++;
	}
	return (0);
}
/*
int	main(void)
{
	char str[] = "tft";
	char str2[] = "test";
	int res = ft_strncmp(str, str2, 4);
	printf("%d", res);
	return 0;
}
*/
