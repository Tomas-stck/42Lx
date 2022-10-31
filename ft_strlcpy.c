/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: totto-pi <totto-pi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 12:38:15 by totto-pi          #+#    #+#             */
/*   Updated: 2022/10/31 13:18:32 by totto-pi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include <stdlib.h>


//The strlcpy() function copies up to size-1 characters from the NUL-terminated string src to dst, NUL-terminating the result.

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;
	char	temp;

	if (!(size > 0) & (src[size] != '\0'))
		return (0);
	i = 0;
	while (i < size)
	{
		temp = src[i];
		dst[i] = temp;
		i++;
	}
	dst[i] = '\0';
	return (size);
}

int main()
{
	char frase[] = "Life is an amazing ride, even when it shits on your dreams.";
	char dest[22] = "Ola ";
	printf("%s\n", frase );
	ft_strlcpy(dest, frase, 5);
	printf("%s\n", dest );
	return (0);
}