#include <stdio.h>

unsigned char	reverse_bits(unsigned char octet)
{
	int i = 8;
	unsigned char result = 0;

	while (i > 0)
	{
		result = result * 2 + (octet % 2);
		octet = octet / 2;
		i--;
	}
	return (result);
}

int main()
{
	unsigned char octet = 2;
	printf("%u\n", reverse_bits(octet));
	return 0;
}
