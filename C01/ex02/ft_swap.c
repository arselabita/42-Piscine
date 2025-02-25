/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abita <abita@student.42vienna.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 22:07:21 by abita             #+#    #+#             */
/*   Updated: 2025/02/10 22:07:24 by abita            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
/*
int	main()
{
	int	a;
	int	b;
	
	a = 12;
	b = 21;
	
	printf("Before swap:\n a = %d\n b = %d\n", a, b);
	
	ft_swap(&a, &b);
	printf("After swap:\n a = %d\n b = %d\n", a, b);
	
	return 0;
}*/
