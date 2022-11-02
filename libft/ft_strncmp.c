#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (s1[i] == s2[i] && i < n)
		i++;
	return ((int)s1[i] - (int)s2[i]);
}

int	main()
{
	char a[] = "Bom dia";
	char b[] = "Bom diaa";
	printf("%i\n",ft_strncmp(a, b, 99));
	printf("%i\n",strncmp(a, b, 99));
	return (0);
}
