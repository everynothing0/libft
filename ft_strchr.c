/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cde-voog <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/16 20:52:21 by cde-voog          #+#    #+#             */
/*   Updated: 2023/04/20 21:33:59 by cde-voog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		cnt;
	char	car;

	car = c;
	cnt = 0;
	while (s[cnt] != car)
	{
		if (s[cnt] == '\0')
			return (NULL);
		cnt++;
	}
	return ((char *)s + cnt);
}
