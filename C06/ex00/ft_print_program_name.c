/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abita <abita@student.42vienna.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/21 09:30:31 by abita             #+#    #+#             */
/*   Updated: 2025/02/21 09:30:33 by abita            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* We’re dealing with a program here, you should therefore have 
   a function main in your .c file.
	• Create a program that displays its own name followed by a new line.*/

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;

	(void)argc;
	i = 0;
	while (argv[0][i])
	{
		write(1, &argv[0][i], 1);
		i++;
	}
	write(1, "\n", 1);
	return (0);
}
