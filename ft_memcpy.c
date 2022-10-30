#include <string.h>
#include <stdio.h>

void *ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t		i;
	const char*	s;
	char*		d;

	if(!src && !dest)
		return (0);
	s = src;
	d = dest;
	i = 0;
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	return (dest);
}

int main()
{
	char frase[] = "Life is an amazing ride, even when it shits on your dreams.";
	char dest[10];
	printf("%s\n", frase );
	ft_memcpy(dest, frase, 9);
	printf("%s", dest );
	return (0);
}