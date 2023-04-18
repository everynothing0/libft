/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cde-voog <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 18:55:33 by cde-voog          #+#    #+#             */
/*   Updated: 2023/04/18 02:32:23 by cde-voog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*str;

	if (!s)
		return (NULL);
	i = -1;
	str = (unsigned char *)s;
	while (++i < n)
	{
		if (str[i] == (unsigned char)c)
			return (str + i);
	}
	return (NULL);
}
