/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abita <abita@student.42vienna.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/19 10:22:47 by abita             #+#    #+#             */
/*   Updated: 2025/02/19 10:22:51 by abita            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Write a function that converts the initial portion of the string pointed by 
   str to its int representation:
	• The string can start with an arbitray amount of white space 
	  (as determined by isspace(3))
	• The string can be followed by an arbitrary amount of + and - signs, 
	  - sign will change the sign of the int returned based on the number of 
	  - is odd or even.
	• Finally the string can be followed by any number of the base 10.
	• Your function should read the string until the string stop following 
	  the rules and return the number found until now.
	• You should not take care of overflow or underflow. 
	  result can be undefined in that case.*/

//#include <stdio.h>

int	ft_atoi(char *str)
{
	int	num;
	int	minus;
	int	i;

	minus = 0;
	num = 0;
	i = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			minus++;
		i++;
	}
	while (str[i] >= 48 && str[i] <= 57)
	{
		num *= 10;
		num += str[i] - 48;
		i++;
	}
	if (!(minus % 2))
		return (num);
	return (-num);
}
/*
int	main(void)
{
	char str[30] = " ---+--+1234ab567";
	printf("%d\n", ft_atoi(str));
	return (0);
}*/
