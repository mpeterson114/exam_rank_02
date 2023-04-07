#include <unistd.h>

int main(int argc, char **argv)
{
	int i = 0;
	int count;

	if (argc == 2)
	{
		while(argv[1][i])
		{
			count = 1;
			if (argv[1][i] >= 'a' && argv[1][i] <= 'z')
			{
				while (count <= (argv[1][i] - 'a' + 1))
				{
					write(1, &argv[1][i], 1);
					count++;
				}
			}
			else if (argv[1][i] >= 'A' && argv[1][i] <= 'Z')
			{
				while (count <= (argv[1][i] - 'A' + 1))
				{
					write(1, &argv[1][i], 1);
					count++;
				}
			}
			else
				write(1, &argv[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return 0;
}
