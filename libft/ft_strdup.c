/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: totto-pi <totto-pi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 17:53:27 by totto-pi          #+#    #+#             */
/*   Updated: 2022/11/11 18:25:21 by totto-pi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*new;
	size_t	len;
	size_t	i;

	i = 0;
	len = ft_strlen(s);
	new = (char*)malloc(len + 1);
	if (!new)
		return (NULL);
	while (i<len)
	{
		new[i] = s[i];
		i++;
	}
	new[len] = '\0';
	return (new);
}
