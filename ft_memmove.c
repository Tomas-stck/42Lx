/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: totto-pi <totto-pi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 12:38:41 by totto-pi          #+#    #+#             */
/*   Updated: 2022/10/31 15:32:42 by totto-pi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include <stdlib.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	const char*	s;
	char*		d;
	char*		temp;
	size_t		i;

	if(!src & !dest)
		return (0);
	temp = (char *)malloc(sizeof(char)*n);
	s = src;
	d = dest;
	i = 0;
	while (i < n)
	{
		*(temp + i) = *(s + i);
		i++;
	}
	i = 0;
	while (i < n)
	{
		*(d + i) = *(temp + i);
		i++;
	}
	return (dest);
}
/*
	int i;

	i = -1;
	if (dest > src)
		while (n--)
			(char *)dest = (char *)src;
	else
	{
		while (i)
		{
			*((char *)dest + i) = *((char *)src + i);
			i++;
		}
	}
	return (dest);

	*/

int main()
{
	char frase[] = "Life is an amazing ride, even when it shits on your dreams.";
	char dest[22] = "Ola bom Dia meninos!!";
	printf("%s\n", frase );
	ft_memmove(dest, frase, 5);
	printf("%s\n", dest );
	return (0);
}