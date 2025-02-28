/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abita <abita@student.42vienna.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 13:20:31 by abita             #+#    #+#             */
/*   Updated: 2025/02/26 13:20:50 by abita            ###   ########.fr       */
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

	i = 0;
	
	while (str[i])
		i++;
	end = i - 1;
	i = 0;
	while (end > i)
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
	char str[] = "Arsela";
	ft_strrev(str);
	printf("%s\n", str);
	return (0);
}
