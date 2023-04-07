#include <unistd.h>

int	check_dup(char *str, char c, int len)
{
	int i = 0;

	while (str[i] && (i < len || len == -1))
	{
		if (str[i++] == c)
			return 1;
	}
	return 0;
}

int main(int argc, char **argv)
{
	int i = 0;

	if (argc == 3)
	{
		while (argv[1][i] && argv[2][i])
		{
			if (!(check_dup(argv[1], argv[1][i], i)) && check_dup(argv[2], argv[1][i], -1))
				write(1, &argv[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return 0;
}
		 
