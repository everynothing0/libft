#include "libft.h"

// for mallocs and bzerros dispkays errors
// message and exits in case of failure

void	*x_calloc(size_t size)
{
	void	*str;

	str = (void *)malloc (size);
	if (str == NULL)
	{
		write(1, "x_calloc error.\n", 16);
		exit (-1);
	}
	ft_bzero(str, (size));
	return (str);
}
