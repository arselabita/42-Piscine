/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abita <abita@student.42vienna.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 19:00:21 by abita             #+#    #+#             */
/*   Updated: 2025/02/17 19:00:24 by abita            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((s1[i] || s2[i]) && i < n)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}
/*
int	main()
{
	//char str1[] = "Arsela";
	//char str2[] = "Stela";
	
	char str1[] = "aose";
	char str2[] = "arsela";
	
	unsigned int n;
	
	printf("The names are:\n 1st str: %s\n 2nd str: %s\n", str1, str2);	
	n = ft_strncmp(str1,str2,4);
	printf("\nThe value after compare: %d\n", n);
	return (0);
}*/
