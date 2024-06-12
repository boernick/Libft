#include "libft.h"
#include <string.h>
#include <stdio.h>
#include <limits.h>

int main() 
{
	t_list *lst = NULL;
	t_list *new = ft_lstnew("Hello");
	ft_lstadd_back(&lst, new);

	t_list *lst = ft_lstnew("Hello");
	t_list *new = ft_lstnew("World");
	ft_lstadd_back(&lst, new);
	printf(lst);
}
	// char	**s;
	// char	*d;
	// char	**s1;

	// s = ft_split("ik ben nick", 'c');
	// s1 = s;
	// while (*s)
	// {
	// 	d = *s;
	// 	printf("array: %s\n", *s++);
	// 	free(d);
	// }
	// free(s1);
