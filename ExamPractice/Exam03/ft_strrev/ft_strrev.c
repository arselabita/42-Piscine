/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abita <abita@student.42vienna.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/27 18:15:34 by abita             #+#    #+#             */
/*   Updated: 2025/02/27 18:15:35 by abita            ###   ########.fr       */
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

	while (str[i])
		i++;
	end = i - 1;
	i = 0;
	while (end > i)
	{
		temp = str[i];
		str[i] = str[end];
		str[end] = temp;
		end--;
		i++;
	}
	return (str);
}

int	main()
{
	char	str[] = "Arsela";
	ft_strrev(str);
	printf("%s\n", str);
	return (0);
}
