/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abita <abita@student.42vienna.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 22:33:11 by abita             #+#    #+#             */
/*   Updated: 2025/02/10 22:33:13 by abita            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*int	main()
{
	int	a;
	int	b;
	int	div;
	int	mod;

	a = 12;
	b = 4;
	
	printf("The values are :\n a = %d\n b = %d\n", a, b);

	ft_div_mod(a, b, &div, &mod);
	printf("The division : %d\n", div);
	
	printf("The modulo : %d\n", mod);
	
	return 0;
}*/
