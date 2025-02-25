/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abita <abita@student.42vienna.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 13:07:08 by abita             #+#    #+#             */
/*   Updated: 2025/02/18 13:07:10 by abita            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Create a function that displays a string 
   of characters on the standard output.*/

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}
/*
int	main()
{
	char arr[] = "Arsela Bita";
	ft_putstr(arr);
	return (0);
}*/
