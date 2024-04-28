/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nboer <nboer@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/27 15:29:15 by nboer             #+#    #+#             */
/*   Updated: 2024/04/28 20:22:37 by nboer            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

int	ft_strncmp(char *str1, char *str2, int n)
{
	int	i;
	int	j;

	i = 0;
	while ((str1[i] != '\0' || str2[i] != '\0') && i < n)
	{
		j = str1[i] - str2[i];
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
