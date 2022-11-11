/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: totto-pi <totto-pi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 16:04:39 by totto-pi          #+#    #+#             */
/*   Updated: 2022/11/11 17:32:10 by totto-pi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	size_t	i;
	int		res;
	int		signal;

	signal = 1;
	i = 0;
	res = 0;
	while ((nptr[i] >= 9 && nptr[i] <= 13) || nptr[i] == ' ')
		i++;
	if ((nptr[i] == '-' || nptr[i] == '+') && (nptr[i + 1] < '0' || nptr[i + 1] > '9'))
		return (0);
	if ((nptr[i] == '-' || nptr[i] == '+' ) && (nptr[i + 1] >= '0' && nptr[i + 1] <= '9'))
	{
		if (nptr[i] == '-')
			signal = -1;
		i++;
	}
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		res = res * 10 + nptr[i] - '0';
		if (nptr[i + 1] < '0' || nptr[i + 1] > '9')
			return (res * signal);
		i++;
	}
	return (0);
}
