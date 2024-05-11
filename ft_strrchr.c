/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nboer <nboer@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 14:59:12 by nboer             #+#    #+#             */
/*   Updated: 2024/04/30 15:28:26 by nboer            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, char c)
{
	char	*p;

	p = NULL;
	while (*str != '\0')
	{
		if (*str == c)
			p = (char *) str;
		str++;
	}
	if (c == '\0')
		return ((char *)str);
	return ((char *)p);
}
