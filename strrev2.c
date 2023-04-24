#include <stdio.h>

char *strrev2(char *str)
{
	int len = 0;
	int i = 0;
	int x = 0;
	char temp;
 
	while (str[len])
		len++;
	x = len - 1;
	while (i < len / 2)
	{
		temp = str[x];
		str[x] = str[i];
		str[i] = temp;
		i++;
		x--;
	}
	return (str);
}

int main()
{
	char str[] = "helloworldd";
	printf("%s\n", strrev2(str));
	return 0;}
