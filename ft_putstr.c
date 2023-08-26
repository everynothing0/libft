/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cde-voog <cde-voog@student.42lehavre.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 14:04:42 by cde-voog          #+#    #+#             */
/*   Updated: 2023/08/26 14:08:00 by cde-voog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

// the pointer passed to the function contains the adress of the string frist character

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		write(1, &str[i++], 1);
}
