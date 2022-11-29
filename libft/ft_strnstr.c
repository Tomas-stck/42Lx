/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: totto-pi <totto-pi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 17:48:01 by totto-pi          #+#    #+#             */
/*   Updated: 2022/11/29 18:44:58 by totto-pi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	l;

	l = ft_strlen(little);
	if (*little == '\0')
		return ((char *)big);
	if (len == 0)
		return (NULL);
	while (*big && l <= len)
	{
		if (*big == *little && ft_strncmp(big, little, l) == 0)
			return ((char *)big);
		else
		{
			big++;
			len--;
		}
	}
	return (NULL);
}
