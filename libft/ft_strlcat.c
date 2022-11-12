/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: totto-pi <totto-pi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 15:33:15 by totto-pi          #+#    #+#             */
/*   Updated: 2022/11/12 16:02:45 by totto-pi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
