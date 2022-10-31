/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: totto-pi <totto-pi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 15:33:15 by totto-pi          #+#    #+#             */
/*   Updated: 2022/10/31 16:51:17 by totto-pi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "ft_strlen.c"

//use `pkg-config --cflags --libs libbsd-overlay` after gcc instructions

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
	while (i < size -1)
		dst[dlen++] = src[i++];
	dst[i] = 0;
	return (i + slen - 1);
}

/*size_t	i;
	char	temp;
	size_t	len;

	len = ft_strlen(src);
	if (!(size > 0) && (src[len + 1] != '\0') & (dst[size] != '\0'))
		return (0);
	i = 0;
	if (ft_strlen(dst) < ft_strlen(src))
	{
		while (i < size)
		{
		temp = src[i];
		dst[i] = temp;
		i++;
		}
	}
	
	dst[i] = '\0';
	return (size);*/
	
int main()
{
	char frase[] = "Life is an amazing ride, even when it shits on your dreams.";
	char dest[22] = "Ola ";
	printf("%s\n", frase );
	strlcat(dest, frase, 7);
	printf("%s\n", dest );
	return (0);
}
