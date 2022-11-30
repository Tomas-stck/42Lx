/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: totto-pi <totto-pi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 16:08:28 by totto-pi          #+#    #+#             */
/*   Updated: 2022/11/29 16:17:44 by totto-pi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	int_len(int n)
{
	size_t	i;

	i = 0;
	if (n < 0)
	{
		i++;
		n *= -1;
	}
	while (n / 10 != 0)
	{
		n /= 10;
		i++;
	}
	return (++i);
}

char	*ft_itoa(int n)
{
	char	*s;
	size_t	i;
	int		temp;

	temp = n;
	i = int_len(n);
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	s = malloc(i * sizeof(char) + 1);
	if (!s)
		return (NULL);
	if (n < 0)
		n *= -1;
	s[i] = '\0';
	while (i > 0)
	{
		s[i - 1] = n % 10 + '0';
		n = n / 10;
		i--;
	}
	if (temp < 0)
		s[0] = '-';
	return (s);
}
