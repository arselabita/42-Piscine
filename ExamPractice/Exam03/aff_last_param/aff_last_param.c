/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_last_param.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abita <abita@student.42vienna.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/27 17:25:37 by abita             #+#    #+#             */
/*   Updated: 2025/02/27 17:25:38 by abita            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Write a program that takes strings as arguments, and displays its last
   argument followed by a newline.

   If the number of arguments is less than 1, the program displays a newline.

	Examples:

	$> ./aff_last_param "zaz" "mange" "des" "chats" | cat -e
	chats$
	$> ./aff_last_param "j'aime le savon" | cat -e
	j'aime le savon$
	$> ./aff_last_param
	$*/

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;
	int	j;
	int	end;

	if (argc > 1)
	{	
		i = argc - 1;
		j = 0;
		while (argv[i][j])
		{
			write(1, &argv[i][j], 1);
			j++;
		}
		write(1, "\n", 1);
	}
	return (0);
}
