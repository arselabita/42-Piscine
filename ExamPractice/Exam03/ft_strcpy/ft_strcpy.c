/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abita <abita@student.42vienna.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/27 17:44:39 by abita             #+#    #+#             */
/*   Updated: 2025/02/27 17:44:40 by abita            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Reproduce the behavior of the function strcpy (man strcpy).*/

#include <stdio.h>

char    *ft_strcpy(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s2[i])
	{
		s1[i] = s2[i];			
		i++;
	}
	s1[i] = '\0'; 
	return (s1);
}

int	main()
{
	char	str1[30];
	char	str2[30] = "Arsela";

	ft_strcpy(str1, str2);
	printf("%s\n", str1);
	return (0);
}
