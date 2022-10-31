/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tester_main.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: totto-pi <totto-pi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 17:21:53 by totto-pi          #+#    #+#             */
/*   Updated: 2022/10/25 17:50:06 by totto-pi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	main(void)
{
	char	a = 'a';

	if (ft_isalpha(a))
		printf("True");
	else
		printf("False");
	return (0);
}

//strlen
{
	char* a = "Ola";
	int	len;

	len = ft_strlen(a);
	printf("%i", len);
}