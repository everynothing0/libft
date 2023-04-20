/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cde-voog <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 15:58:51 by cde-voog          #+#    #+#             */
/*   Updated: 2023/04/20 17:01:01 by cde-voog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	len;
	size_t	i;
	char	*ret;

	len = ft_strlen(s);
	i = 0;
	if (!s || !f)
		return ;
	ret = (char *)malloc(sizeof(char) * (len + 1));
	if (!ret)
		return ;
	while (i < len)
	{
		ret[i] = f(i, &s[i]);
		i++;
	}
	ret[i] = '\0';
	return (ret);
}
