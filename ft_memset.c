/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: totto-pi <totto-pi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 12:38:48 by totto-pi          #+#    #+#             */
/*   Updated: 2022/11/01 15:51:44 by totto-pi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



// ptr ==> Starting address of memory to be filled
// c   ==> Value to be filled
// n   ==> Number of bytes to be filled starting 
//         VOID pointers can't be iterated, so we transform to "UsCHAR Pointer"

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*a;
	size_t			i;

	i = 0;
	a = (unsigned char *) s;
	while (i < n)
	{
		a[i] = c;
		i++;
	}
	return (a);
}

int main()
{
	char frase[] = "Life is an amazing ride, even when it shits on your dreams.";	
	printf("%s", ft_memset(frase + 8, '-', 2));
	return (0);
}