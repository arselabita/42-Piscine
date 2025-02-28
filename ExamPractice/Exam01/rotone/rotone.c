/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotone.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abita <abita@student.42vienna.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 16:41:20 by abita             #+#    #+#             */
/*   Updated: 2025/02/26 16:41:22 by abita            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Write a program that takes a string and displays it, replacing each of its
   letters by the next one in alphabetical order.

   'z' becomes 'a' and 'Z' becomes 'A'. Case remains unaffected.

    The output will be followed by a \n.

    If the number of arguments is not 1, the program displays \n.

	Example:

	$>./rotone "abc"
	bcd
	$>./rotone "Les stagiaires du staff ne sentent pas t tres bon." | cat -e
	Mft tubhjbjsft ev tubgg of tfoufou qbt upvkpvst usft cpo.$
	$>./rotone "AkjhZ zLKIJz , 23y " | cat -e
	BlkiA aMLJKa , 23z $
	$>./rotone | cat -e
	$
	$>
	$>./rotone "" | cat -e
	$
	$>*/

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;
	char	c;

	if (argc == 2)
	{
		i = 0;
		while (argv[1][i])
		{
			c = argv[1][i];
			if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
			{
				if (c == 'z') c = 'a';
    				else if (c == 'Z') c = 'A';
    				else c += 1;
			}
			write(1, &c, 1);
			i++;
		}
		write(1, "\n", 1);
	}
	return (0);
}

