/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: totto-pi <totto-pi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 12:38:41 by totto-pi          #+#    #+#             */
/*   Updated: 2022/11/01 18:18:28 by totto-pi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	const char*	s;
	char*		d;
	char*		temp;
	size_t		i;

	if(!src & !dest)
		return (0);
	temp = (char *)malloc(sizeof(char)*n);
	s = src;
	d = dest;
	i = 0;
	while (i < n)
	{
		*(temp + i) = *(s + i);
		i++;
	}
	i = 0;
	while (i < n)
	{
		*(d + i) = *(temp + i);
		i++;
	}
	return (dest);
}
