/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abita <abita@student.42vienna.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/09 09:06:45 by abita             #+#    #+#             */
/*   Updated: 2025/02/09 09:06:48 by abita            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_print_comb2(void)
{
	char	num1;
	char	num2;
	char 	num3;
	char	num4;
	char	num5;

	num1 = '0';
	while (num1 <= '9')
	{
		num2 = '0';
		while (num2 <= '9')
		{
			num3 = '0';
			while (num3 <= '9')
			{
				num4 = num1 + 1;
				while (num4 <= '9')
				{
					write(1, &num1, 1);
					write(1, &num2, 1);
					write(1, " ", 2);
					write(1, &num3, 1);
					write(1, &num4, 1);
					if (!(num1 == '9' && num2 == '8'))
					{
						write(1, ", ", 2);
					}
				}num4++;
			}num3++;
		}num2++;
	}num1++;
	num3++;
}

int main(void)
{
	ft_print_comb2();
	return 0;
}
