/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: totto-pi <totto-pi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 15:33:15 by totto-pi          #+#    #+#             */
/*   Updated: 2022/11/29 17:19:50 by totto-pi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	t_size;
	size_t	i;
	size_t	slen;
	size_t	dlen;
	char	*s;

	s = (char *)src;
	dlen = ft_strlen(dst);
	slen = ft_strlen(src);
	if (size > dlen)
		t_size = slen + dlen;
	else
		t_size = slen + size;
	i = 0;
	while (s[i] && (dlen + 1) < size)
		dst[dlen++] = src[i++];
	dst[dlen] = '\0';
	return (t_size);
}
