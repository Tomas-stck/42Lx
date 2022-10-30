// ptr ==> Starting address of memory to be filled
// c   ==> Value to be filled
// n   ==> Number of bytes to be filled starting 
//         VOID pointers can't be iterated, so we transform to "UsCHAR Pointer"

#include <string.h>
#include <stdio.h>
#include <stdlib.h>

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