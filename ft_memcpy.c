/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cde-voog <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/15 00:03:28 by cde-voog          #+#    #+#             */
/*   Updated: 2023/04/17 01:38:02 by cde-voog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*memcpy(void *dest, const void *src, size_t n)
{
	size_t	len;
	const char	*s;
	unsigned char *d;

	if (!dest)
		return (NULL);
	d = dest;
	s = src;
	len = 0;
	while (len < n)
	{
		d[len] = s[len];
		len++;
	}
	return (dest);
}
