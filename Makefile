NAME = libft.a
CC = cc
CFLAGS = -Wall -Wextra -Werror
SRCS = ft_strchr.c ft_memset.c ft_bzero.c ft_memcpy.c ft_isalpha.c ft_isdigit.c ft_strchr.c ft_isascii.c ft_isprint.c ft_isalnum.c ft_toupper.c ft_tolower.c ft_strncmp.c ft_strlen.c ft_strlcopy.c ft_atoi.c ft_memmove.c ft_strlcat.c
OBJS = $(SRCS:.c=.o)
HEADER = libft.h

all: $(NAME)

$(NAME): $(OBJS) $(HEADER)
	ar rcs $(NAME) $(OBJS)

%.o: %.c $(HEADER)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

