/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abita <abita@student.42vienna.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 19:25:48 by abita             #+#    #+#             */
/*   Updated: 2025/02/26 19:25:49 by abita            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Write a program that takes two strings and displays, without doubles, the
   characters that appear in both strings, in the order they appear in the first
   one.

   The display will be followed by a \n.

   If the number of arguments is not 2, the program displays \n.

	Examples:

	$>./inter "padinton" "paqefwtdjetyiytjneytjoeyjnejeyj" | cat -e
	padinto$
	$>./inter ddf6vewg64f gtwthgdwthdwfteewhrtag6h4ffdhsd | cat -e
	df6ewg4$
	$>./inter "rien" "cette phrase ne cache rien" | cat -e
	rien$
	$>./inter | cat -e
	$*/

#include <unistd.h>

//check if the char has appeard before
int	is_dublicate(char *str1, char s, int position)
{
	int	i;

	i = 0;
	//checks even the position if it has appeared before
	while (i < position)
	{
	        // If Str[i] is the same as Char, returns true
		if (str1[i] == s)
			return (1);
		i++;
	}
	return (0);
}
void	inter(char *str1, char *str2)
{
	int	i;
	int	j;

	i = 0;
	while (str1[i])
	{
		j = 0;
		while (str2[j])
		{
			//If what is in str1 is in str2
			if (str1[i] == str2[j])
			{	
				//if the character didnt appear beffore, it is printed
				if (!is_dublicate(str1, str1[i], i))
					write(1, &str1[i], 1);
				break ;
			}
			j++;
		}
		i++;
	}
}
int	main(int argc, char **argv)
{
	if (argc == 3)
		inter(argv[1], argv[2]);

	write(1, "\n", 1);
	return (0);
}
