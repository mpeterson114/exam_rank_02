/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpeterso <mpeterso@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/22 11:17:29 by mpeterso          #+#    #+#             */
/*   Updated: 2023/01/22 12:06:32 by mpeterso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main (int argc, char **argv)
{
	int len = 0;

	if (argc == 2)
	{
		while (argv[1][len])
			len++;
		while (len--)
			write(1, &argv[1][len], 1);
	}
	write(1, "\n", 1);
	return (0);
}
