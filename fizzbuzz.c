/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fizzbuzz.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpeterso <mpeterso@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/22 09:51:22 by mpeterso          #+#    #+#             */
/*   Updated: 2023/01/22 10:00:10 by mpeterso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main (void)
{
	char x;

	while (x > 0 && x < 100)
	{
		if (x % 3 == 0)
			write(1, "fizz", 5);
		else if (x % 5 == 0)
			write(1, "buzz", 5);
		else if (x % 3 == 0 && x % 5 == 0)
			write(1, "fizzbuzz", 9);
		else
			write(1, &x, 1);
	}
	write(1, "\n", 1);
}

