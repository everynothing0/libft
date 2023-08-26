/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   nb_abs.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cde-voog <cde-voog@student.42lehavre.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 14:02:08 by cde-voog          #+#    #+#             */
/*   Updated: 2023/08/26 14:04:21 by cde-voog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

// returns the absolute value of a given number. absolute value of a number is used to measure the distance of that number from 0, it is posiitbe or negative (abs value of -6 is 6).

int	nb_abs(int nb)
{
	if (nb < 0)
		return (nb * -1);
	return (nb);
}
