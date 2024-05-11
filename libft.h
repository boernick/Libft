/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nboer <nboer@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/28 20:45:05 by nboer             #+#    #+#             */
/*   Updated: 2024/05/11 15:37:33 by nboer            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stdlib.h>

char			ft_tolower(char c);
char			ft_toupper(char c);
char			*ft_strchr(const char *str, char c);
int				ft_atoi(const char *nptr);
int				ft_isalnum(const char c);
int				ft_isalpha(int c);
int				ft_isascii(int c);
int				ft_isdigit(int c);
int				ft_isprint(const int c);
int				ft_strncmp(const char *str1, const char *str2, size_t n);
size_t			ft_strlcat(char *dest, char *src, size_t size);
unsigned int	ft_strlcpy(char *dest, char *src, unsigned int n);
size_t			ft_strlen(const char *str);
void			ft_bzero(void *str, size_t n);
void			*ft_memcpy(void *dest, const void *src, size_t n);
void			*ft_memmove(void *dest, const void *src, size_t n);
void			*ft_memset(void *str, int c, size_t n);
char			*ft_strrchr(const char *str, char c);
void			*ft_memchr(const void *str, int c, size_t n);
int				ft_memcmp(const void *s1, const void *s2, size_t n);
char			*ft_strnstr(const char *big, const char *little, size_t len);

#endif
