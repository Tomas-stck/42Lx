/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: totto-pi <totto-pi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 15:33:15 by totto-pi          #+#    #+#             */
/*   Updated: 2022/11/01 18:18:44 by totto-pi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//use `pkg-config --cflags --libs libbsd-overlay` after gcc instructions

/**
 * The function ft_strlcat() appends the null-terminated string src to the end of dst. It will append
 * at most size - strlen(dst) - 1 bytes, NUL-terminating the result
 * 
 * @param dst This is the destination string.
 * @param src The string to be appended.
 * @param size the size of the destination buffer
 * 
 * @return The length of the string it tried to create in the buffer.
 */
size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	slen;
	size_t	dlen;
	
	slen = ft_strlen(src);
	if ((size <= 0) && (src[slen + 1] != 0))
		return (0);
	dlen = ft_strlen(dst);
	i = 0;
	while (i < size - 1)
		dst[dlen++] = src[i++];
	dst[i] = 0;
	return (i + slen - 1);
}
