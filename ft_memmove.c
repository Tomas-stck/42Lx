#include <string.h>
#include <stdio.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	const char*	s;
	char*		d;

	if(!src & !dest)
		return (0);
	s = src;
	d = dest;
	while (n--)
		*d++ = *s++;
	return (d);
}
int main()
{
	char frase[] = "Life is an amazing ride, even when it shits on your dreams.";
	char dest[22] = "Ola bom Dia meninos!!";
	printf("%s\n", frase );
	ft_memmove(dest, frase, 5);
	printf("%s\n", dest );
	return (0);
}