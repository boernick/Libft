/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nboer <nboer@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/27 15:25:53 by nboer             #+#    #+#             */
/*   Updated: 2024/05/11 15:40:21 by nboer            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	ft_tolower(char c)
{
	if (c >= 'A' && c <= 'Z')
		c += ('a' - 'A');
	return (c);
}
/*
int main(void)
{   
    char test = 'B';
    char result = ft_tolower(test);
    printf("%c", result);
}*/
