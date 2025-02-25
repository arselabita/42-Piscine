/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abita <abita@student.42vienna.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 16:59:12 by abita             #+#    #+#             */
/*   Updated: 2025/02/20 16:59:14 by abita            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Create a recursive function that returns the factorial of the number 
   given as a parameter.
	• If the argument is not valid the function should return 0.
	• Overflows must not be handled, the function return will be undefined.*/

//#include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	if (nb == 0 || nb == 1)
		return (1);
	return (nb * ft_recursive_factorial(nb - 1));
}
/*
int	main()
{
	int	num;
	int	result;

	num = 5;
	printf("The number is %d\n", num);

	result = ft_recursive_factorial(num);
	printf("The factorial is %d\n", result);
	return (0);
}*/
