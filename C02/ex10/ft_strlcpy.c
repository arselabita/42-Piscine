/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abita <abita@student.42vienna.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/13 00:38:33 by abita             #+#    #+#             */
/*   Updated: 2025/02/13 00:38:35 by abita            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	end;
	unsigned int	length;

	end = size - 1;
	length = 0;
	while (src[length])
		length++;
	if (size == 0)
		return (length);
	i = 0;
	while (src[i] && i < end)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (length);
}
/*
int	main()
{
	char arr[] = "Arsela Bita";
	char dest[50];
	unsigned int size = 50; 
	
	
	printf("Before: %s\n", arr);
	
	printf("After: %d\n", ft_strlcpy(dest, arr, size));
	return 0;
}*/
