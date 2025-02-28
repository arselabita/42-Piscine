/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   only_a.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abita <abita@student.42vienna.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/25 19:26:02 by abita             #+#    #+#             */
/*   Updated: 2025/02/25 19:26:03 by abita            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Write a program that displays a 'a' character on the standard output.*/

#include <unistd.h>

int	main()
{
	write(1, "a", 1);	
	return (0);
}
