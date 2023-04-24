#include <unistd.h>

int check(int c, char *str, int index)
{
	int i = 0;

	while (i < index)
	{
		if (str[i] == c)
			return 1;
		i++;
	}
	return 0;
}

int main(int argc, char **argv)
{
	int i = 0;
	int j = 0;
	int k = 0;

	if (argc == 3)
	{
		while (argv[1][i])
			i++;
		while (argv[2][j])
		{
			argv[1][i] = argv[2][j];
			i++;
			j++;
		}
		while (argv[1][k] && k < i)
		{
			if (!(check(argv[1][k], argv[1], k)))
				write(1, &argv[1][k], 1);
			k++;
		}
	}
	write(1, "\n", 1);
	return 0;
}
			
				
			
		
