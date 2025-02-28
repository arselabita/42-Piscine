/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_countdown.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abita <abita@student.42vienna.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/25 19:30:33 by abita             #+#    #+#             */
/*   Updated: 2025/02/25 19:30:36 by abita            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Write a program that displays all digits in descending order, 
   followed by a newline.*/
   
#include <unistd.h>

int	main()
{
	write(1, "9876543210\n", 9);
	return (0);
}
