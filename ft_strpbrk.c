#include <stdio.h>
#include <string.h>

char *ft_strpbrk(const char *s1, const char *s2)
{
	int i = 0;

	while (*s1)
	{
		i = 0;
		while (s2[i])
		{
			if (*s1 == s2[i])
				return ((char *)s1);
			i++;
		}
		s1++;
	}
	return (NULL);
}

/*int main()
{
	const char s1[] = "1234567890";
	const char s2[] = "9876";
	printf("%s\n", ft_strpbrk(s1, s2));
	return 0;
}*/
	
