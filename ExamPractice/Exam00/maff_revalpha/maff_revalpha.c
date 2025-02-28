/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maff_revalpha.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abita <abita@student.42vienna.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/25 22:09:30 by abita             #+#    #+#             */
/*   Updated: 2025/02/25 22:09:32 by abita            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Write a program that displays the alphabet in reverse, with even letters in
   uppercase, and odd letters in lowercase, followed by a newline.

	Example:

	$> ./maff_revalpha | cat -e
	zYxWvUtSrQpOnMlKjIhGfEdCbA$*/

#include <unistd.h>

int	main()
{
	write(1, "zYxWvUtSrQpOnMlKjIhGfEdCbA\n", 27);
	return (0);
}
