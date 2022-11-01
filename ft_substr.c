/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: totto-pi <totto-pi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 12:38:55 by totto-pi          #+#    #+#             */
/*   Updated: 2022/11/01 15:52:11 by totto-pi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
s: The string from which to create the substring.
start: The start index of the substring in the string ’s’.
len: The maximum length of the substring.
Return value The substring.
NULL if the allocation fails
*/

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char*	str;
	int		i;

	if (!s)
		return (NULL);
	str = (char*)malloc(1 + len * sizeof(char));
	if(!str)
		return (NULL);
	i=0;
	while(start < len)
	{
		str[i] = s[start];
		start++;
		i++;
	}
	str[i] = '\0';
	return (str);
}

int main()
{
    char src[] = "Life is full of hope, and when it rains it poors";
 
    int start = 0;
    int len = 4;
 
    char* dest = ft_substr(src, start, len);
 
    printf("%s\n", dest);
 
    return 0;
}
