/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cde-voog <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/23 21:35:48 by cde-voog          #+#    #+#             */
/*   Updated: 2023/04/24 03:50:58 by cde-voog         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
static size_t	count_words(const char *s, char c)
{
	size_t	words;

	words = 0; // = 1
	while (*s)
	{
		if (*s != c)
		{
			++words;
			while (*s && *s != c)
				++s; // s++
		}
		else
			++s; // s++
	}
	return (words);
}

static size_t	copy_word(char **dst, char *src, char c)
{
	size_t	len;

	len = 0;
	while (*src && *src != c)
	{
		*(*dst)++ = *src++;
		++len; // acces caracter actuel de la chaine de dest et increment en +
	}
	return (len);
}

char	**ft_split(char const *s, char c)
{
	size_t	nb_words;
	char	**res;

	if (!s)
		return (NULL);
	nb_words = count_words(s, c);
	res = (char **)malloc((nb_words + 1) * sizeof(char *));
}

//char	**ft_split(char const *s, char c)
//{
//}

int	main(void)
{
	const char *s = "Hello World! Yellow"; // chaine de caractere
	char delimiter = ' '; // delimiteur il en exist 5

	size_t word_count = count_words(s, delimiter); // appel de la fomction count_words
	printf(count_words("number of words in the string \"%s\" est : %zu\n", s, word_count )); // affichage
	return (0);
}
