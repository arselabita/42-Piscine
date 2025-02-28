/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abita <abita@student.42vienna.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/27 13:16:36 by abita             #+#    #+#             */
/*   Updated: 2025/02/27 13:16:37 by abita            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Write a function that displays all digits in ascending order.*/
#include <unistd.h>

void	ft_print_numbers(void)
{
	write(1, "0123456789", 10);
}

int	main()
{
	ft_print_numbers();
	return (0);
}
