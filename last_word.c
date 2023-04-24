#include <unistd.h>

int main(int argc, char **argv)
{
	int len = 0;
	int start = 0;
	int end = 0;

	if (argc == 2)
	{
		while (argv[1][len + 1] != '\0')
			len++;
		while (argv[1][len] == ' ' || argv[1][len] == '	')
			len--;
		end = len;
		while (argv[1][len] && argv[1][len] != ' ' && argv[1][len] != '	')
			len--;
		start = len + 1;
		while (start <= end)
		{
			write(1, &argv[1][start], 1);
			start++;
		}
	}
	write(1, "\n", 1);
	return 0;
}
		 
