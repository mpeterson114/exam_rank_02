#include <stdio.h>
#include <string.h>

char *ft_strrev(char *str)
{
	int i = 0;
	char temp;
	int len = 0;

	while (str[len] != '\0')
		len++;
	while (i < len / 2)
	{
		temp = str[i];
		str[i] = str[len - 1 - i];
		str[len - 1 - i] = temp;
		i++;
	}
	return (str);	
}

/*int main()
{
	char str[] = "happy";
	printf("%s\n", ft_strrev(str));
	return 0;
}*/
		 
