/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nboer <nboer@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/27 15:21:24 by nboer             #+#    #+#             */
/*   Updated: 2024/04/29 13:22:06 by nboer            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	ft_toupper(char c)
{
	if (c >= 97 && c <= 122)
		c -= 32;
	return (c);
}
/*
int main(void)
{   
    char test = 'b';
    char result = ft_toupper(test);
    printf("%c", result);
}*/
