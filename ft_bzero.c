/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: totto-pi <totto-pi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 12:38:22 by totto-pi          #+#    #+#             */
/*   Updated: 2022/10/31 12:38:22 by totto-pi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <string.h>
#include <stdio.h>

void	ft_bzero(void *s, size_t n)
{
	unsigned char*		ptr;

	ptr = s;
	while (n-- > 0)
		*ptr++ = '\0';
}
int main()
{
	char frase[] =" {1,2,3,4,5}";
	printf("%s",frase);
	ft_bzero(frase, 2);
	printf("%s",frase);
	return (0);
}