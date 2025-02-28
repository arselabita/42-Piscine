/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abita <abita@student.42vienna.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/25 23:13:34 by abita             #+#    #+#             */
/*   Updated: 2025/02/25 23:13:37 by abita            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Write a function that converts the string argument str to an integer 
   (type int) and returns it.
   It works much like the standard atoi(const char *str) function, see the man.*/

#include <stdio.h>
int	ft_atoi(const char *str)
{
	int	i;
	int	sign;
	int	result;

	i = 0;
	sign = 1;
	result = 0;

	while (str[i] == ' ' || (str[i] >= '\t' && str[i] <= '\r'))
		i++;

	if (str[i] == '-')
	{
		sign *= -1;
		i++;
	}

	while ((str[i] >= '0') && (str[i] <= '9'))
	{
		result = (result * 10) + (str[i] - '0');
		i++;
	}
	return (result * sign);
}

int	main()
{
	char	str[] = "   -72654518";

	int result = ft_atoi(str);
	printf("%d\n", result);
	return (0);
}
