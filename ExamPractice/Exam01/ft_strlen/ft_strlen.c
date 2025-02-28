/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abita <abita@student.42vienna.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 11:45:07 by abita             #+#    #+#             */
/*   Updated: 2025/02/26 11:45:08 by abita            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Write a function that returns the length of a string.*/

#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	main()
{
	char str[] = "Arsela";
	int length = ft_strlen(str);

	printf("%d\n", length);
	return (0);
}
