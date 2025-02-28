/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abita <abita@student.42vienna.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/25 22:36:08 by abita             #+#    #+#             */
/*   Updated: 2025/02/25 22:36:10 by abita            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Write a function that reverses (in-place) a string.
   It must return its parameter.*/

#include <stdio.h>

char    *ft_strrev(char *str)
{
	int	i;
	int	end;
	int	temp;
	int	size;

	i = 0;
	while (str[i])
		i++;
	end = i - 1;
	i = 0;
	while (i < size)
	{
		temp = str[i];
		str[i] = str[end];
		str[end] = temp;
		
		i++;
		end--;
		
	}
	return (str);
}

int	main()
{
	char str[50] = "Arsela";
	ft_strrev(str);
	printf("%s\n", str);
	return (0);
}
