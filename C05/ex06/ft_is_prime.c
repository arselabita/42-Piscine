/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abita <abita@student.42vienna.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 13:31:04 by abita             #+#    #+#             */
/*   Updated: 2025/02/24 13:31:05 by abita            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Create a function that returns 1 if the number given as a parameter is 
   a prime number, and 0 if it isn’t.*/

//#include <stdio.h>

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
int	main()
{
	int	number;
	int	result;

	number = 7;
	printf("The number inputed is: %d\n", number);
	
	if (ft_is_prime(number)) printf("**%d is a prime number!**\n");
	else printf("\n**It is not a prime number!**\n");
	
	if (ft_is_prime(4)) printf("\n**4 is a prime number!**\n");
	else printf("\n**4 is not a prime number!**\n");
	
	if (ft_is_prime(6)) printf("\n**6 is a prime number!**\n");
	else printf("\n**6 is not a prime number!**\n");
	return (0);
}*/
