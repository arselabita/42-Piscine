/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   only_z.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abita <abita@student.42vienna.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 11:43:08 by abita             #+#    #+#             */
/*   Updated: 2025/02/26 11:43:09 by abita            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Write a program that displays a 'z' character on the standard output.*/

#include <unistd.h>

int	main()
{
	write (1, "z", 1);
	return (0);
}
