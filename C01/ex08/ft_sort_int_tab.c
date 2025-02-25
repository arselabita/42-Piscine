/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abita <abita@student.42vienna.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 21:23:03 by abita             #+#    #+#             */
/*   Updated: 2025/02/11 21:23:05 by abita            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	end;
	int	temp;

	end = size - 1;
	i = 0;
	while (i < end)
	{
		j = i + 1;
		while (j < end)
		{
			if (tab[i] > tab[j])
			{
				temp = tab[i];
				tab[i] = tab[j];
				tab[j] = temp;
			}
			j++;
		}
		i++;
	}
}
/*
int	main()
{
	int i = 0;
	int size = 5;
	
	int arr[5] = {1, 5, 6, 3, 9};
	
	ft_sort_int_tab(arr, size);
	while (i < size)
	{
		printf("%d", arr[i]);
		i++;
	}
	return 0;
}*/
