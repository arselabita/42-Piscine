/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abita <abita@student.42vienna.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/11 13:29:18 by abita             #+#    #+#             */
/*   Updated: 2025/02/11 13:29:21 by abita            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	end;
	int	temp;

	end = size - 1;
	i = 0;
	while (i < end)
	{
		temp = tab[i];
		tab[i] = tab[end];
		tab[end] = temp;
		i++;
		end--;
	}
}
/*
int 	main()
{
	int i = 0;
	int size = 5;
	
	int arr[5] = {1, 2, 3, 4, 5};
	
	ft_rev_int_tab(arr, size);
	
	while (i < size)
	{
		printf("%d", arr[i]);
		i++;
	}
	
	return 0;
}*/
