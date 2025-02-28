/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abita <abita@student.42vienna.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/27 19:22:38 by abita             #+#    #+#             */
/*   Updated: 2025/02/27 19:22:39 by abita            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Write a program that takes two strings and displays, without doubles, the
   characters that appear in either one of the strings.

   The display will be in the order characters appear in the command line, and
   will be followed by a \n.

   If the number of arguments is not 2, the program displays \n.

	Example:

	$>./union zpadinton "paqefwtdjetyiytjneytjoeyjnejeyj" | cat -e
	zpadintoqefwjy$
	$>./union ddf6vewg64f gtwthgdwthdwfteewhrtag6h4ffdhsd | cat -e
	df6vewg4thras$
	$>./union "rien" "cette phrase ne cache rien" | cat -e
	rienct phas$
	$>./union | cat -e
	$
	$>
	$>./union "rien" | cat -e
	$
	$>*/

#include <unistd.h>

int	main(int argc, char **argv)
{
	if (argc == 3)
	{
		
	}
	
	return (0);
}
