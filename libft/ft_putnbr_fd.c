/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: totto-pi <totto-pi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/17 18:19:48 by totto-pi          #+#    #+#             */
/*   Updated: 2022/11/17 19:18:44 by totto-pi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char	*temp;

	if (n == -2147483648)
		ft_putstr_fd("-2147483648", fd);
	if (n < 0 && n > -2147483648)
	{
		n *= -1;
		ft_putchar_fd('-', fd);
	}
	if (n > 9)
	{
		while (n != 0)
		{
			ft_putchar_fd(n % 10 + '0', fd);
			n /= 10;
		}
	}
	if (n > 0 && n <= 9)
		ft_putchar_fd(n + '0', fd);
}
////////////esta a printa ao contrario