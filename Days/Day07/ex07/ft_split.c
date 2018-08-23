/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lgillett <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/09 11:10:47 by lgillett          #+#    #+#             */
/*   Updated: 2018/08/14 01:24:56 by lgillett         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		is_space(char c, char *charset)
{
	int i;

	i = 0;
	while (charset[i])
	{
		if (c == charset[i])
			return (1);
		i++;
	}
	return (0);
}

int		len_word(char *str, char *charset)
{
	int n;

	n = 0;
	while (*(str + n) != '\0' && !is_space(*(str + n), charset))
		n++;
	return (n);
}

int		ft_strlen(char *str)
{
	int n;

	n = 0;
	while (*(str + n) != '\0')
		n++;
	return (n);
}

int		countwords(char *str, char *charset)
{
	int nbwords;
	int i;

	i = 0;
	while (str[i] && is_space(str[i], charset))
		i++;
	if (i == ft_strlen(str))
		return (0);
	if (ft_strlen(str) == 0)
		return (0);
	nbwords = 0;
	i = 0;
	while (is_space(str[i], charset))
		i++;
	while (str[i])
	{
		if (is_space(str[i], charset) &&
			is_space(str[i + 1], charset) == 0 && str[i + 1])
			nbwords++;
		i++;
	}
	return (nbwords + 1);
}

char	**ft_split(char *str, char *charset)
{
	char	**words;
	int		nbwords;
	int		i;
	int		k;

	nbwords = countwords(str, charset);
	words = (char**)malloc((sizeof(char*)) * (nbwords + 1));
	i = -1;
	k = 0;
	while (++i < nbwords)
	{
		while (*str && is_space(*str, charset))
			str++;
		words[i] = (char *)malloc(sizeof(char) * (len_word(str, charset) + 1));
		k = 0;
		while (*str && !is_space(*str, charset))
		{
			words[i][k] = *str;
			str++;
			k++;
		}
		words[i][k] = 0;
	}
	words[i] = 0;
	return (words);
}
