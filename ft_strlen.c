/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nboer <nboer@student.42berlin.de>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/27 15:35:33 by nboer             #+#    #+#             */
/*   Updated: 2024/04/28 20:19:07 by nboer            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"
#include <libft.h>

unsigned int	ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}
/*
int main(void)
{
    char str[] = "sjofjrowjr29-rjw0-23jrl";
    char result = ft_strlen(str);
    printf("%d", result); 
    return (0);
}*/
