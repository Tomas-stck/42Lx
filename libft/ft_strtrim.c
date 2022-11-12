/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: totto-pi <totto-pi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 17:34:53 by totto-pi          #+#    #+#             */
/*   Updated: 2022/11/12 18:59:02 by totto-pi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*ptr;
	size_t	i;
	size_t	j;

	ptr = ft_strdup(s1);
	i = 0;
	j = 0;
	while (ptr[i])
	{
		j = 0;
		while (set[j])
		{
			if (ptr[i] == set[j])
				i++;
			j++;
			if (set[j] == 0)
				ptr[i] = s1[i];
		}
		i++;
	}
	ptr = ft_strdup(ptr);
	if (!ptr)
		return (NULL);
	return (ptr);
}
