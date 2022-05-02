/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kflorett <kflorett@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/16 16:54:33 by kflorett          #+#    #+#             */
/*   Updated: 2021/10/24 12:32:43 by kflorett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	**ft_error(char **str, int words)
{
	int	i;

	i = 0;
	while (i < words)
	{
		free(str[i]);
		i++;
	}
	free(str);
	return ((void *)0);
}

static int	ft_word_count(char const *s, char c)
{
	int	words;
	int	i;

	words = 0;
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c && (s[i + 1] == c || s[i + 1] == '\0'))
			words++;
		i++;
	}
	return (words);
}

static int	ft_len_word(char const *s, char c)
{
	int	len;

	len = 0;
	while (*s != c && *s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}

static char	**ft_new_words(char const *s, char c, int words, char **str)
{
	int		i;
	int		j;
	int		len;

	i = 0;
	j = 0;
	while (s[j] != '\0')
	{
		if (s[j] != c)
		{
			len = ft_len_word(&s[j], c);
			str[i] = (char *)malloc(sizeof(char) * (len + 1));
			if (str[i] == (void *)0)
				return (ft_error(str, words));
			ft_strlcpy(str[i], &s[j], len + 1);
			j += len - 1;
			i++;
		}
		j++;
	}
	str[i] = (void *)0;
	return (str);
}

char	**ft_split(char const *s, char c)
{
	char	**str;
	int		words;

	if (s == (void *)0)
		return ((void *)0);
	words = ft_word_count(s, c);
	str = (char **)malloc(sizeof(char *) * (words + 1));
	if (str == ((void *)0))
		return ((void *)0);
	str = ft_new_words(s, c, words, str);
	return (str);
}
