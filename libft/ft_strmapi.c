/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: totto-pi <totto-pi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 17:47:32 by totto-pi          #+#    #+#             */
/*   Updated: 2022/11/17 17:59:10 by totto-pi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	char	*map;

	i = 0;
	map = malloc(ft_strlen(s) * sizeof(char) + 1);
	if (!map)
		return (NULL);
	while (s[i])
	{
		map[i] = f(i,s[i]);
		i++;
	}
	map[i] = '\0';
	return (map);
}
