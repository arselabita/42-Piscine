/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abita <abita@student.42vienna.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 13:15:26 by abita             #+#    #+#             */
/*   Updated: 2025/02/11 13:15:28 by abita            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_strlen(char *str)
{
	int	count;
	int	i;

	count = 0;
	i = 0;
	while (str[i])
	{
		i++;
		count++;
	}
	return (count);
}
/*
int	main()
{
	char my_str[] = "Arsela Bita";
	int counter;
	
	counter = ft_strlen(my_str);
	
	printf("The string has %d characters.\n", counter);
	return 0;
}*/
