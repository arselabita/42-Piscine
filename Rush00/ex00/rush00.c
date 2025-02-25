/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpons <lpons@student.42vienna.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/09 13:56:34 by lpons             #+#    #+#             */
/*   Updated: 2025/02/09 20:42:24 by lpons            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c);

void	ft_first_or_last_row(int r1, int w1)
{
	if (r1 == 1 || r1 == w1)
	{
		ft_putchar('o');
	}
	else
	{
		ft_putchar('-');
	}
}

void	ft_between_rows(int d3, int w3)
{
	if (d3 == 1 || d3 == w3)
	{
		ft_putchar('|');
	}
	else
	{
		ft_putchar(' ');
	}
}

void	ft_print_rectangle(int right, int down, int x, int y)
{
	if (down == 1 || down == y)
		ft_first_or_last_row(right, x);
	else
		ft_between_rows(right, x);
}

void	rush(int x, int y)
{
	int	down;
	int	right;

	if ((y > 0 && y < 211) && (x > 0 && x < 211))
	{
		down = 1;
		while (down <= y)
		{
			right = 1;
			while (right <= x)
			{
				ft_print_rectangle(right, down, x, y);
				right++;
			}
			write (1, "\n", 1);
			down++;
		}
	}
	else
		write (1, "Error, input number between 1 and 210.\n", 40);
	return ;
}
