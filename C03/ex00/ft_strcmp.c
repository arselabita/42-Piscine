/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abita <abita@student.42vienna.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/17 14:12:45 by abita             #+#    #+#             */
/*   Updated: 2025/02/17 18:58:07 by abita            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] || s2[i])
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
	//char	str1[] = "arsela";
	//char	str2[] = "stela";
		
	//char	str1[] = "Arsela";
	//char	str2[] = "Arsela";
		
	char	str1[] = "arsela";
	char	str2[] = "arsela";

	int	value;

	printf("Before:\n First str: %s\n Second str: %s\n", str1, str2);
	value = ft_strcmp(str1, str2);
	printf("The value is: %d\n", value);
	return (0);
}*/
