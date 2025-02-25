/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abita <abita@student.42vienna.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 19:43:22 by abita             #+#    #+#             */
/*   Updated: 2025/02/20 19:43:23 by abita            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Create a recursive function that returns the value of a power applied 
   to a number.
	• A power lower than 0 returns 0.
	• Overflows must not be handled, the function return will be undefined.
	• We’ve decided that 0 power 0 will returns 1*/

//#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	int	result;
	int	i;

	result = 1;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	i = 0;
	while (i < power)
		i++;
	return (nb * ft_recursive_power(nb, power - 1));
}
/*
int	main()
{
	int	number;
	int	power;
	int	result;

	number = 3;
	power = 2;
	printf("The number is: %d\n", number);
	printf("The power of the number is: %d\n", power);

	result = ft_recursive_power(number, power);

	printf("The result is: %d\n", result);
	return (0);
}*/
