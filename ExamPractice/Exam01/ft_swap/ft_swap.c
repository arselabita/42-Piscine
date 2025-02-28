/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abita <abita@student.42vienna.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 11:48:29 by abita             #+#    #+#             */
/*   Updated: 2025/02/26 11:48:30 by abita            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Write a function that swaps the contents of two integers the adresses of 
   which are passed as parameters.*/

#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

int	main()
{
	int	a;
	int	b;
	
	a = 2;
	b = 3;
	
	ft_swap(&a, &b);
	printf("a = %d\n b = %d\n", a, b);
	return (0);
}
