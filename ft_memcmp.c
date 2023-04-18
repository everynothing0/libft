/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cde-voog <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 23:38:25 by cde-voog          #+#    #+#             */
/*   Updated: 2023/04/17 23:40:21 by cde-voog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*prem;
	const unsigned char	*scd;
	size_t				i;

	i = 0;
	prem = (const unsigned char *)s1;
	scd = (const unsigned char *)s2;
	while (i < n)
	{
		if (prem[i] != scd[i])
			return (prem[i] - scd[i]);
		i++;
	}
	return (0);
}
