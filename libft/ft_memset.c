/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: totto-pi <totto-pi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 12:38:48 by totto-pi          #+#    #+#             */
/*   Updated: 2022/11/12 16:02:04 by totto-pi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// ptr ==> Starting address of memory to be filled
// c   ==> Value to be filled
// n   ==> Number of bytes to be filled starting 
//         VOID pointers can't be iterated, so we transform to "UsCHAR Pointer"

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*a;
	size_t			i;

	i = 0;
	a = (unsigned char *) s;
	while (i < n)
	{
		a[i] = c;
		i++;
	}
	return (a);
}
