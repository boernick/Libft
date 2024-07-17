NAME = libft.a
CC = cc
CFLAGS = -Wall -Wextra -Werror
SRCS = ft_striteri.c ft_strmapi.c ft_itoa.c ft_split.c\
  ft_putnbr_fd.c ft_putendl_fd.c ft_putstr_fd.c ft_putchar_fd.c\
   ft_strtrim.c ft_strjoin.c ft_substr.c ft_strdup.c ft_calloc.c\
    ft_strnstr.c ft_memcmp.c ft_memchr.c ft_strrchr.c ft_strchr.c\
     ft_memset.c ft_bzero.c ft_memcpy.c ft_isalpha.c ft_isdigit.c\
      ft_strchr.c ft_isascii.c ft_isprint.c ft_isalnum.c ft_toupper.c\
	   ft_tolower.c ft_strncmp.c ft_strlen.c ft_strlcpy.c ft_atoi.c ft_memmove.c ft_strlcat.c
BONUS_SRCS = ft_lstclear.c ft_lstdelone.c ft_lstadd_back.c ft_lstlast.c ft_lstsize.c ft_lstadd_front.c ft_lstnew.c 
OBJS = $(SRCS:.c=.o)
BONUS_OBJS = $(BONUS_SRCS:.c=.o)
HEADER = libft.h

all: $(NAME)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

bonus: $(OBJS) $(BONUS_OBJS)
	ar rcs $(NAME) $(OBJS) $(BONUS_OBJS)

%.o: %.c $(HEADER)
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS) $(BONUS_OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all
