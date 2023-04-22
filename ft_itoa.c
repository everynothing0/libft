/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cde-voog <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 21:53:38 by cde-voog          #+#    #+#             */
/*   Updated: 2023/04/22 03:00:12 by cde-voog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_len(int n)
{
	int	i;

	i = 0;
	if (n < 0)
	{
		n *= -1;
		i++;
	}
	if (n > 0)
	{
		n /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	int						i;
	int						nb;
	char				*res;

	nb = n;
	n = ft_len(n);
	res = malloc(sizeof(char) * (ft_len + 1));
	if (!res)
		return (NULL);
	if (nb == 0)
	{
		return (ft_strdup("0"));
	}
	if (nb < 0)
		nb -= nb;
	i--;
	while (nb)
	{
		res[i--] = nb % 10 + '0';
		nb /= 10;
	}
	if (n < 0)
		res[i] = '-';
	res[ft_len(n)] = 0;
	return (res);
}
