/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abita <abita@student.42vienna.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 22:49:22 by abita             #+#    #+#             */
/*   Updated: 2025/02/12 22:49:24 by abita            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 'A' && str[i] <= 'Z'))
			return (0);
		i++;
	}
	return (1);
}
/*
int	main()
{
	char	arr[] = "ARSELAAA";
	//char	arr[] = "Ar5el4 B1t4";
	int var;
	
	var = ft_str_is_uppercase(arr);
	printf("%d\n", var);
	
	return 0;
}*/
