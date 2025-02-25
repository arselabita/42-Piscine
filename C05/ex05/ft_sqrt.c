/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abita <abita@student.42vienna.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 10:30:20 by abita             #+#    #+#             */
/*   Updated: 2025/02/24 10:30:21 by abita            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Create a function that returns the square root of a number (if it exists), 
   or 0 if the square root is an irrational number.*/

//#include <stdio.h>

int	ft_sqrt(int nb)
{
	int	result;

	if (nb <= 0)
		return (0);
	result = 1;
	while (result * result <= nb)
	{
		if (result * result == nb)
			return (result);
		result++;
	}
	return (0);
}
/*
int	main()
{
	int	number;
	int	result;

	number = 5;
	printf("The number: %d\n", number);

	result = ft_sqrt(number);
	printf("The square root: %d\n", result);
	return (0);
}*/
