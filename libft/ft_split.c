
#include "libft.h"

int	char_count(char const *s, char c) // para medir o malloc a criar
{
	int i;

	i = 0;
	while (*s)
	{
		if (*s++ != c)
			i++;
		else
			*s++;
	}
	return (i);
}

int	word_size(char const *s, char c, int i) // para medir o malloc a criar
{
	int	size;

	size = 0;
	while (s[i] != c && s[i])
	{
		i++;
		size++;
	}
	return (size);
}

/* char	*words(char const *s, char c)
{
	int 	i;
	size_t	len;
	char	*word;

	word = (char *)malloc();
	i = 0;
	while (*s)
	{
		if (s[0] == c)
			*s++;
		while (*s != c && *s)
			*word++ = *s++;
	}
	*word = '\0';
	return (word);
}
*/

char	**ft_split(char const *s, char c)
{
	char	**ptr;
	int		i;
	int		j;
	int		w_len;

	i = 0;
	j = 0;
	ptr = (char **)malloc((char_count(s, c) + 1) * sizeof(char *));
	if (!ptr)
		return (NULL);
	while (i <= ft_strlen(s))
	{
		if (s[i] != c)
		{
			w_len = word_size(s, c, i);
			ptr[j] = ft_substr(s, i, w_len);
			if (ptr[j])
			{
				i += w_len;
				j++;
			}
			else
				return (NULL);
		}
		i++;
	}
	printf("%d\n", char_count(s, c));
	ptr[j] = '\0';
	return (ptr);
}

int	main()
{
	char	*s = " Ola bom dia ";
	char	c = ' ';
	printf("%s\n", ft_split(s, c));
}
