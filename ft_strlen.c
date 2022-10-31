/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: totto-pi <totto-pi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 17:37:28 by totto-pi          #+#    #+#             */
/*   Updated: 2022/10/31 15:28:35 by totto-pi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

size_t ft_strlen(const char *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return ((size_t)i);
}
