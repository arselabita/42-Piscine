/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abita <abita@student.42vienna.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 23:15:24 by abita             #+#    #+#             */
/*   Updated: 2025/02/17 23:15:27 by abita            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (dest[j])
		j++;
	while (src[i] && i < nb)
	{
		dest[i + j] = src[i];
		i++;
	}
	dest[i + j] = '\0';
	return (dest);
}
/*
int	main()
{
	char src[20] = "arsela ";
	char dest[20] = "bita";
	unsigned int nb;
	
	printf("Before: %s\n and %s\n", src, dest);
	ft_strncat(dest, src, 5);
	printf("After: %s\n", dest);
	return (0);
}*/
