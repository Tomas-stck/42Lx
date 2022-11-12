/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: totto-pi <totto-pi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 15:59:13 by totto-pi          #+#    #+#             */
/*   Updated: 2022/11/12 15:50:19 by totto-pi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// The memchr() function scans the initial n bytes of the memory
//  area pointed to by s for the first instance of c.  Both c and the
//  bytes of the memory area pointed to by s are interpreted as
//  unsigned char.

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t				i;
	const unsigned char	*ptr;

	ptr = s;
	i = 0;
	if (*ptr + i == '\0')
		return (NULL);
	while (i <= n)
	{
		if (*ptr == '\0')
			return (NULL);
		if (*ptr == (unsigned char)c)
			break ;
		ptr++;
		i++;
	}
	return ((unsigned char *)ptr);
}
