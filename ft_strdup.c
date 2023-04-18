/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cde-voog <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 00:20:23 by cde-voog          #+#    #+#             */
/*   Updated: 2023/04/19 00:24:00 by cde-voog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	int		l;
	int		i;
	char	*dest;

	l = 0;
	while (s[l])
		l++;
	dest = (char *)malloc(sizeof(*dest) * ft_strlen(s) + 1);
	if (!dest)
		return (NULL);
	i = 0;
	while (i < l)
	{
		dest[i] = s[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
