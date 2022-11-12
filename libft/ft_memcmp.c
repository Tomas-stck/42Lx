/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: totto-pi <totto-pi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 16:40:14 by totto-pi          #+#    #+#             */
/*   Updated: 2022/11/12 16:00:57 by totto-pi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*a1;
	const unsigned char	*a2;

	a1 = s1;
	a2 = s2;
	if (n == 0)
		return (0);
	while (n != 0 && *a1 == *a2)
	{
		if ((*a1 == '\0' || *a2 == '\0'))
			break ;
		a1++;
		a2++;
		n--;
	}
	if ((*a1 == '\0' && *a2 == '\0'))
		return (0);
	return ((unsigned char *)a1 - (unsigned char *)a2);
}
