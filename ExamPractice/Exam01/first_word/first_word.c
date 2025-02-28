/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_word.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abita <abita@student.42vienna.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 12:18:12 by abita             #+#    #+#             */
/*   Updated: 2025/02/26 12:18:13 by abita            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Write a program that takes a string and displays its first word, followed by a
   newline.

   A word is a section of string delimited by spaces/tabs or by the start/end of
   the string.

   If the number of parameters is not 1, or if there are no words, simply display
   a newline.

	Examples:

	$> ./first_word "FOR PONY" | cat -e
	FOR$
	$> ./first_word "this  ...  is sparta, then again, maybe    not" | cat -e
	this$
	$> ./first_word "   " | cat -e
	$
	$> ./first_word "a" "b" | cat -e
	$
	$> ./first_word "  lorem,ipsum  " | cat -e
	lorem,ipsum$
	$>*/

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;
	int	j;
	int	end;
	
	if (argc == 2)
	{
		j = 0;
		while (argv[1][j] == ' ' || argv[1][j] == '\t')
			j++;
		while (argv[1][j] != '\0' && argv[1][j] != ' ' && argv[1][j] != '\t')
		{
			write(1, &argv[1][j], 1);
			j++;
		}
	}
	write(1, "\n", 1);
	return(0);
}
