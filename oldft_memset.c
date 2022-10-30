// ptr ==> Starting address of memory to be filled
// c   ==> Value to be filled
// n   ==> Number of bytes to be filled starting 
//         VOID pointers can't be iterated, so we transform to "UsCHAR Pointer"

#include <string.h>
#include <stdio.h>

void printArray(char arr[], int size)
{
	int i;
	i = 0;
	while (i < size)
		printf("%c", arr[i++]);
	printf("\n");
}

void	*ft_memset(void *s, int c, size_t n)
{
	if (!c)
		return (s);
	else
	{
		unsigned char *a;

		a = s;
		while (n)
		{
			*a++ = (unsigned char) c;
			n--;
		}
		return (a);
	}
}

int main()
{
	char frase[] = "Life is an amazing ride, even when it shits on your dreams.";

	printArray(frase, 60);
	ft_memset(frase + 8, '-', 2);
	printArray(frase, 60);

	return (0);
}
