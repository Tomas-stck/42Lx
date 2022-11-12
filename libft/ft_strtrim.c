/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: totto-pi <totto-pi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 17:34:53 by totto-pi          #+#    #+#             */
/*   Updated: 2022/11/12 18:38:28 by totto-pi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*ptr;
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (1)
	{
		j = 0;
		while (set[j])
		{
			if (s1[i] == set[j])
				i++;
			j++;
		}
		i++;
	}
	return (ptr);
}

/* i = 0;
	while (i < ft_strlen(s1) + 1)
	{
		j = 0;
		while (set[j])
		{
			if (s1[i] == set[j])
				i++;
			j++;
		}
		if (j == ft_strlen((char *)set))
			ptr[i] = s1[i];
		i++;
	} */