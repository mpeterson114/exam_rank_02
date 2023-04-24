#include <stdio.h>

int length(char *str)
{
	int length = 0;
	
	while (str[length])
		length++;
	return (length);
}

int main()
{
	char str[] = "megan";
	printf("%d\n", length(str));
	return 0;}
