/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cde-voog <cde-voog@student.42lehavre.fr>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 14:09:07 by cde-voog          #+#    #+#             */
/*   Updated: 2023/08/26 15:36:38 by cde-voog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

// accurately copies the content of the source string s2 into the dest s1 and ensures that the dest string in properly terminated with a null character

char	*ft_strcpy(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s2[i])
	{
		s2[i] = s1[i];
		i++;
	}
	s1[i] = '\0';
	return (s1);
}
