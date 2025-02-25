/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abita <abita@student.42vienna.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 13:23:35 by abita             #+#    #+#             */
/*   Updated: 2025/02/18 13:23:36 by abita            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Create a function that displays the number entered as a parameter. 
   The function has to be able to display all possible values 
   within an int type variable.

   ft_putnbr(42) displays "42".
*/

#include <unistd.h>

void	ft_putnbr(int nb)
{
	char	print;

	if (nb == -2147483648)
	{
		write(1, "-2", 2);
		nb = 147483648;
	}
	if (nb < 0)
	{
		write (1, "-", 1);
		nb = -nb;
	}
	if (nb >= 10)
		ft_putnbr(nb / 10);
	print = (nb % 10) + '0';
	write(1, &print, 1);
}
/*
int	main(void)
{
	ft_putnbr(42);
	// ft_putnbr(120);
	// ft_putnbr(-42);
	// ft_putnbr(-424622196);
	return (0);
}*/
