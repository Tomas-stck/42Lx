/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: totto-pi <totto-pi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 17:48:01 by totto-pi          #+#    #+#             */
/*   Updated: 2022/11/09 18:05:59 by totto-pi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (little[i] == '\0')
		return (*big);
	while (big[i] && (i < len))
	{
		j = 0;
		if (big[i] == little[j])
		{
			while (big[i] == little[j])
			{
				i++;
				j++;
				if ( little[j] == '\0')
					return (*little);
			}

		}
		else
			i++;
	}
	if ( i == len)
		return (NULL);
}