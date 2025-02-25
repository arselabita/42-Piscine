/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abita <abita@student.42vienna.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 16:57:36 by abita             #+#    #+#             */
/*   Updated: 2025/02/24 16:57:38 by abita            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Create a function that returns the next prime number greater or equal to 
   the number given as argument.*/

/*#include <stdio.h>*/

int	ft_is_prime(int nb)
{
	int	i;

	if (nb <= 1)
		return (0);
	i = 2;
	while (i < nb)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}
/*
int	ft_find_next_prime(int nb)
{
	if (nb < 2)
		return (2);
	nb++;
	while (!ft_is_prime(nb))
		nb++;
	return (nb);
}
*/

int	ft_find_next_prime(int nb)
{
	while (ft_is_prime(nb + 1) == 0)
		nb++;
	return (nb + 1);
}
/*
int	main(void)
{
	int	number;
	int	result;

	number = 7;
	result = ft_find_next_prime(number);
	printf("The next prime is: %d\n", result);	
	return (0);
}*/
