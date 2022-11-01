/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: totto-pi <totto-pi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 12:38:15 by totto-pi          #+#    #+#             */
/*   Updated: 2022/11/01 15:51:58 by totto-pi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//The strlcpy() function copies up to size-1 characters from the NUL-terminated string src to dst, NUL-terminating the result.
//use `pkg-config --cflags --libs libbsd-overlay` after gcc instructions


size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;
	int		len;

	len = ft_strlen(src);
	if (!(size > 0) && (src[len] != 0))
		return (0);
	i = 0;
	while (i < size - 1)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = 0;
	return (size);
}

int main()
{
	char frase[] = "Life is an amazing ride, even when it shits on your dreams.";
	char dest[22] = "Ola ";
	printf("%s\n", frase );
	ft_strlcpy(dest, frase, 7);
	printf("%s\n", dest );
	return (0);
}