#include <stdio.h>
#include <limits.h>
#include <stdlib.h>

int	max(int *tab, unsigned int len)
{
	int i = 0;
	int max = 0;

	if (!tab)
		return 0;
	while (i < len)
	{
		if (tab[i] >= max)
			max = tab[i];
		i++;
	}
	return (max);
}

int main()
{
	int tab[7] = {2, 6, 4, 1, 10, -4, -22};
	unsigned int len = 7;
	printf("%d\n", max(tab, len));
	return 0;}
	
