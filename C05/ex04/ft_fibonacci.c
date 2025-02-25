/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abita <abita@student.42vienna.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 20:13:06 by abita             #+#    #+#             */
/*   Updated: 2025/02/20 20:13:08 by abita            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Create a function ft_fibonacci that returns the n-th element of the Fibonacci
   sequence, the first element being at the 0 index.
   We’ll consider that the Fibonacci sequence starts like this: 0, 1, 1, 2.
	• Overflows must not be handled, the function return will be undefined.
	• Obviously, ft_fibonacci has to be recursive.
	• If the index is less than 0, the function should return -1*/

//#include <stdio.h>

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	if (index == 0)
		return (0);
	if (index == 1)
		return (1);
	return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}
/*
int	main()
{
	int index = 20;
	int i = 0;
	while ( i < index)
	{
		printf("%d", ft_fibonacci(i));
		if (i != index - 1)
			printf (", ");
		i++;
	}
	printf ("\n");
	return (0);
}*/
