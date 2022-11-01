/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: totto-pi <totto-pi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 12:38:22 by totto-pi          #+#    #+#             */
/*   Updated: 2022/11/01 18:19:35 by totto-pi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

/**
 * Ft_bzero() takes a pointer to a memory area and a size, and sets all the bytes in the memory area to
 * zero
 * 
 * @param s This is the pointer to the memory that needs to be filled with zeros.
 * @param n The number of bytes to be set to zero.
 */
void	ft_bzero(void *s, size_t n)
{
	unsigned char*		ptr;

	ptr = s;
	while (n-- > 0)
		*ptr++ = '\0';
}
