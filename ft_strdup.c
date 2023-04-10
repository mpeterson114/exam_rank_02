#include <stdlib.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int i = 0;

	while (str[i])
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	char *new;
	int i = 0;
	
	new = (char *)malloc(sizeof(char) * ft_strlen(src) + 1);
	if (!new)
		return NULL;
	while (src[i])
	{
		new[i] = src[i];
		i++;
	}
	return (new);
}

int main()
{
	char src[] = "heyyy";
	printf("%s\n", ft_strdup(src));
	return 0;
}
