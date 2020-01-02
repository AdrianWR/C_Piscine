/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aroque <aroque@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/01 15:46:34 by aroque            #+#    #+#             */
/*   Updated: 2020/01/01 20:54:40 by aroque           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str)
{
	if (!(*str))
		return (0);
	else
		return (ft_strlen(++str) + 1);
}

int		is_charset(char c, char *charset)
{
	if (!(*charset))
		return (0);
	else if (c == *charset || c == '\0')
		return (1);
	else
		return (is_charset(c, ++charset));
}

int		word_count(char *str, char *charset)
{
	int i;
	int trigger;

	i = 0;
	trigger = 0;
	while (*str)
	{
		if (!is_charset(*str, charset) && trigger == 0)
		{
			trigger = 1;
			i++;
		}
		else if (is_charset(*str, charset))
			trigger = 0;
		str++;
	}
	return (i);
}

char	*word_dup(char *str, int start, int finish)
{
	char *word;
	int i;

	i = 0;
	word = malloc((finish - start) * sizeof(char));
	while (start < finish)
		word[i++] = str[start++];
	word[i] = '\0';
	return (word);
}

char	**ft_split(char *str, char *charset)
{
	int i;
	int j;
	int index;
	char **split;

	i = 0;
	j = 0;
	index = -1;
	split = malloc((word_count(str, charset) + 1) * sizeof(char *));
	while (i <= ft_strlen(str))
	{
		if (!is_charset(str[i], charset) && index < 0)
			index = i;
		else if ((is_charset(str[i], charset)) && (index >= 0))
		{
			split[j] = word_dup(str, index, i);
			index = -1;
			j++;
		}
		i++;
	}
	split[j] = 0;
	return (split);
}
