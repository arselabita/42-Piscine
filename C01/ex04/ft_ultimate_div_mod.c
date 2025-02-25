/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abita <abita@student.42vienna.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 22:54:40 by abita             #+#    #+#             */
/*   Updated: 2025/02/10 22:54:42 by abita            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *a / *b;
	*b = temp % *b;
}
/*
int	main()
{
	int	num1;
	int	num2;

	num1 = 10;
	num2 = 3;
	
	printf("The values are :\n num1 = %d\n num2 = %d\n", num1, num2);

	ft_ultimate_div_mod(&num1, &num2);	
	printf("The values are : a = %d and num2 = %d\n", num1, num2);
	
	return 0;
}*/
