/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   split.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oufisaou <oufisaou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 00:15:03 by oufisaou          #+#    #+#             */
/*   Updated: 2022/03/31 02:52:19 by oufisaou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static int	words_num(char const *s, char c)
{
	int	counter;

	counter = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s && *s != c)
			counter++;
		while (*s && *s != c)
			s++;
	}
	return (counter);
}

void	ft_free_array(char **sentence, int n)
{
	if (sentence == NULL)
		return ;
	while (n--)
		free(sentence[n]);
	free(sentence);
}

static char	*char_alloc(char const *s, char c)
{
	int		character;
	char	*word;

	character = 0;
	while (s[character] && s[character] != c)
		character++;
	word = (char *)malloc(sizeof(char) * (character + 1));
	if (word)
	{
		ft_strlcpy(word, s, character + 1);
		return (word);
	}
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	char	**sentence;
	int		i;
	int		len_s;

	if (s)
	{
		len_s = words_num(s, c);
		sentence = (char **)malloc(sizeof(char *) * (len_s + 1));
		if (sentence)
		{
			i = -1;
			while (++i < len_s)
			{
				while (*s == c)
					s++;
				sentence[i] = char_alloc(s, c);
				if (!sentence[i])
					ft_free_array(sentence, i);
				s = s + ft_strlen(sentence[i]);
			}
			sentence[i] = 0;
			return (sentence);
		}
	}
	return (NULL);
}

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	index;

	if (!size)
		return (ft_strlen(src));
	index = 0;
	while (src[index] && index < size - 1)
	{
		dest[index] = src[index];
		index++;
	}
	dest[index] = '\0';
	return (ft_strlen(src));
}
