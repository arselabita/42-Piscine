/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abita <abita@student.42vienna.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 16:51:32 by abita             #+#    #+#             */
/*   Updated: 2025/02/20 16:51:33 by abita            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Create an iterated function that returns a number. This number is the 
   result of a factorial operation based on the number given as a parameter.
	• If the argument is not valid the function should return 0.
	• Overflows must not be handled, the function return will be undefined.*/

//#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	result;
	int	i;

	result = 1;
	if (nb < 0)
		return (0);
	i = 1;
	while (i <= nb)
	{
		result *= i;
		i++;
	}
	return (result);
}
/*
int	main()
{
	int	num;
	int	result;

	num = 5;
	result = ft_iterative_factorial(num);
	printf("Factorial of the number %d is: %d\n", num, result);
	return (0);
}*/
