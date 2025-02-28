/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abita <abita@student.42vienna.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/27 17:07:24 by abita             #+#    #+#             */
/*   Updated: 2025/02/27 17:07:25 by abita            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Write a function that takes a string and displays the string in reverse
   order followed by the newline.
   It must return its argument

	Examples:

	$> ./rev_print "zaz" | cat -e
	zaz$
	$> ./rev_print "dub0 a POIL" | cat -e
	LIOP a 0bud$
	$> ./rev_print | cat -e
	$*/

#include <unistd.h>

char *ft_rev_print (char *str)
{
	int	i;
	int	end;

	i = 0;
	
	while (str[i])
		i++;
	end = i - 1;
	while (end >= 0)
	{
		write(1, &str[end], 1);
		end--;
	}
	write(1, "\n", 1);
	return (str);
}

int	main()
{
	char str[] = "Arsela";
	ft_rev_print(str);
	return (0);
}
