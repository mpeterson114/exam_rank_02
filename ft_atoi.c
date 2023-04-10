#include <stdio.h>

int	ft_atoi(const char *str)
{
	int result = 0;
	int i = 0;
	int sign = 1;

	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	if (str[i] == '-')
		sign = -1;
	if (str[i] == '+' || str[i] == '-')
	{
		/*if (str[i] == '-')
			sign *= -1;*/
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = (result * 10) + str[i] - '0';
		i++;
	}
	return (result * sign);
}

int main()
{
	const char str[] = "       +    13928";
	printf("%d\n", ft_atoi(str));
	return 0;
}
