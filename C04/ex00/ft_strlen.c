/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abita <abita@student.42vienna.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 16:14:51 by abita             #+#    #+#             */
/*   Updated: 2025/02/13 16:14:54 by abita            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Create a function that counts and returns the number of characters 
   in a string.*/

//#include <stdio.h>

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (str[count])
		count++;
	return (count);
}
/*
int	main()
{
	char arr[] = "Arsela Bita";
	int var;
	
	var = ft_strlen(arr);
	printf("%d\n", var);
	return 0;
}*/
