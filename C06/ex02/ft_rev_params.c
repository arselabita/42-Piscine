/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abita <abita@student.42vienna.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/21 11:39:02 by abita             #+#    #+#             */
/*   Updated: 2025/02/21 11:39:04 by abita            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* We’re dealing with a program here, you should therefore have a 
   function main in your .c file.
	• Create a program that displays its given arguments.
	• One per line, in the reverse order of the command line.
	• It should display all arguments, except for argv[0].*/

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;
	int	j;

	i = argc - 1;
	while (i > 0)
	{
		j = 0;
		while (argv[i][j])
		{
			write(1, &argv[i][j], 1);
			j++;
		}
		write(1, "\n", 1);
		i--;
	}
	return (0);
}
