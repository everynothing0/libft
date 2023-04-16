/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cde-voog <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/16 22:40:16 by cde-voog          #+#    #+#             */
/*   Updated: 2023/04/16 22:48:21 by cde-voog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	const char	*str;

	while (*s)
		s++;
	*str = 1;
	while (s >= str)
		if (*s-- == (char)c)
			return ((char *)s + 1);
	if (c == '\0')
		return ((char *)s);
	return (0);
}