/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abita <abita@student.42vienna.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/18 00:13:03 by abita             #+#    #+#             */
/*   Updated: 2025/02/18 00:13:05 by abita            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Return a pointer if substring found.
// Return NULL if substring not found.

//#include <stdio.h>
char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	if (to_find[0] == '\0')
		return (str);
	i = 0;
	while (str[i])
	{
		j = 0;
		while (to_find[j] && str[i + j] == to_find[j])
			j++;
		if (!to_find[j])
			return (&str[i]);
		i++;
	}
	return (0);
}
/*
int	main()
{
	char	s1[15] = "Arsela Bita!";
	char	str_to_find[10] = "Stefan";
	char	*value;

	printf("String: %s and \nString to find: %s\n", s1, str_to_find);
	value = ft_strstr(s1, str_to_find);
	if (value)
		printf("The string found is: %s\n", value);
	else
		printf("The string is not found.");
	return (0);
}*/
