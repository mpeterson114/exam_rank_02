/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpeterso <mpeterso@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/22 10:48:43 by mpeterso          #+#    #+#             */
/*   Updated: 2023/01/22 11:16:07 by mpeterso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main (int argc, char **argv)
{
	int i = 0;

	if (argc == 2)
	{
		while (argv[1][i] != '\0')
		{
			if (argv[1][i] >= 97 && argv[1][i] <= 122)
			{
				int x = 0;
				while (x < argv[1][i] - 96)
				{
					write(1, &argv[1][i], 1);
					x++;
				}
			}	
			else if (argv[1][i] >= 65 && argv[1][i] <= 90)
			{
				int y = 0;
				while (y < argv[1][i] - 64)
				{	
					write(1, &argv[1][i], 1);
					y++;
				}
			}
			else
				write(1, &argv[1][i], 1);
			i++;
		}
	}
	write(1, "\n", 1);
	return (0);
}


