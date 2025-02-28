/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fizzbuzz.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abita <abita@student.42vienna.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/27 13:20:45 by abita             #+#    #+#             */
/*   Updated: 2025/02/27 13:20:47 by abita            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Write a program that writes a series of numbers of 1 to 100 on the output
   Standard, all separated by a Newline.

   If the number is a multiple of 3, the program must write 'Fizz' instead.

   If the number is a multiple of 5, the program must write 'Buzz' instead.

   If the number is a multiple of 3 and a multiple of 5, the program must write
   'Fizzbuzz' instead.

	Exemple:

	$>./fizzbuzz
	1
	2
	fizz
	4
	buzz
	fizz
	7
	8
	fizz
	buzz
	11
	fizz
	13
	14
	fizzbuzz
	[...]
	97
	98
	fizz
	buzz
	$> */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int n)
{
	if (n >= 0 && n <= 9)
		ft_putchar(n + '0');
	if (n > 9)
		ft_putchar(n / 10);
		ft_putchar(n % 10);
}

int	main()
{
	int	i = 1;

	while (i <= 100)
	{
		if (i % 3 == 0)
			write(1, "Fizz", 4);
		else if (i % 5 == 0)
			write(1, "Buzz", 4);
		else if ((i % 3 != 0) && (i % 5 != 0))
			write(1, "FizzBuzz", 8);
		else
			ft_putnbr(i);
		write(1, "\n", 1);
		i++;
	}
	return (0);
}
