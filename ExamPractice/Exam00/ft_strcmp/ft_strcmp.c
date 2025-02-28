/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abita <abita@student.42vienna.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/25 22:23:17 by abita             #+#    #+#             */
/*   Updated: 2025/02/25 22:23:19 by abita            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Reproduce the behavior of the function strcmp (man strcmp).*/

#include <stdio.h>

int    ft_strcmp(char *s1, char *s2)
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

int	main()
{
	int	cmp;
	char	str1[] = "Arsela";
	char	str2[] = "Arsea";

	cmp = ft_strcmp(str1, str2);
	printf("%d\n", cmp);
	return (0);
}
