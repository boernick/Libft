/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nboer <nboer@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/27 15:41:49 by nboer             #+#    #+#             */
/*   Updated: 2024/04/28 20:22:13 by nboer            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "libft.h"

char	*ft_strchr(char *str, char c)
{
	while (*str != '\0')
	{
		if (*str == c)
			return (str);
		str++;
	}
	return ('\0');
}
/*
#include <stdio.h>
int	main(void)
{
    char *result = ft_strchr("testtestetsetsetestsetsetse", 'm');
    printf("%s", result);
    return (0);
}*/
