/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: totto-pi <totto-pi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 15:02:04 by totto-pi          #+#    #+#             */
/*   Updated: 2022/11/17 15:38:51 by totto-pi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	word_count(char const *s, char c)
{
	int	j;

	j = 0;
	while(*s)
	{
		if(*s != c && *s)
		{
			while (*s != c && *s)
				s++;
			j++;
		}
		else if (*s == c)
			s++;
	}
	return (j);
}

int	word_size(char const *s, char c, int i)
{
	int	size;

	size = 0;
	while (s[i] != c && s[i])
	{
		i++;
		size++;
	}
	return (size);
}

char	**ft_split(char const *s, char c)
{
	char	**ptr;
	int		i;
	int		j;
	int		w_len;

	i = 0;
	j = 0;
	ptr = (char **)malloc((word_count(s, c) + 1) * sizeof(char *));
	if (!ptr || !s)
		return (NULL);
	while (i < (int)ft_strlen(s))
	{
		if (s[i] != c)
		{
			w_len = word_size(s, c, i);
			ptr[j] = ft_substr(s, i, w_len);
			if (ptr[j])
			{
				i += w_len;
				j++;
			}
			else
				return (NULL);
		}
		i++;
	}
	ptr[j] = 0;
	return (ptr);
}
