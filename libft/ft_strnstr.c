/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: totto-pi <totto-pi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 17:48:01 by totto-pi          #+#    #+#             */
/*   Updated: 2022/11/09 18:27:30 by totto-pi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "libft.h"

// char	*ft_strnstr(const char *big, const char *little, size_t len)
// {
// 	size_t	l;
// 	size_t	j;

// 	l = ft_strlen(little);
// 	if (*little == '\0')
// 		return ((char *)big);
// 	while (*big && l <= len)
// 	{
// 		j = 0;
// 		if (*big == *little)
// 		{
// 			while (*big == *little)
// 			{
				
// 				if ( *little == '\0')
// 					return ((char *)little);
// 			}
// 		}
// 		else
// 			big++;
// 	}
// 	if ( l == len)
// 		return (NULL);
// }

// char	*ft_strnstr(const char *big, const char *little, size_t len)
// {
// 	size_t	n;

// 	if (*little == 0)
// 		return ((char *)big);
// 	n = ft_strlen(little);
// 	while (*big && n <= len)
// 	{
// 		if (*big == *little && ft_strncmp(big, little, n) == 0)
// 			return ((char *)big);
// 		++big;
// 		--len;
// 	}
// 	return (NULL);
// }
