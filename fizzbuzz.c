#include <unistd.h>
#include <stdlib.h>

void	ft_putnbr(int n)
{
	char c;

	if (n >= 10)
		ft_putnbr(n / 10);
	c = (n % 10) + '0';
	write(1, &c, 1);
}

int main()
{
	int nb = 11;
	ft_putnbr(nb);
	return 0;}	

/*int nb = 1;

	while(nb <= 100)
	{
		if (nb % 3 == 0)
			write(1, "fizz", 4);
		else if (nb % 5 == 0)
			write(1, "buzz", 4);
		else if (nb % 3 == 0 && nb % 5 == 0)
			write(1, "fizzbuzz", 8);
		else
			ft_putnbr(nb);
		write(1, "\n", 1);
		nb++;
	}
}*/
	
