/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maff_alpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abita <abita@student.42vienna.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/25 22:06:04 by abita             #+#    #+#             */
/*   Updated: 2025/02/25 22:06:05 by abita            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Write a program that displays the alphabet, with even letters in uppercase, and
   odd letters in lowercase, followed by a newline.

	Example:

	$> ./maff_alpha | cat -e
	aBcDeFgHiJkLmNoPqRsTuVwXyZ$*/
	
#include <unistd.h>

int	main()
{
	write(1, "aBcDeFgHiJkLmNoPqRsTuVwXyZ\n", 27);
	return (0);
}
