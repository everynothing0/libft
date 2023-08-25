/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   x_calloc.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cde-voog <cde-voog@student.42lehavre.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 12:34:50 by cde-voog          #+#    #+#             */
/*   Updated: 2023/08/24 12:35:20 by cde-voog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// for mallocs and bzerros dispkays errors
// message and exits in case of failure, she's not standard lib

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
