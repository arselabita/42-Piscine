/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hello.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abita <abita@student.42vienna.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/25 22:11:53 by abita             #+#    #+#             */
/*   Updated: 2025/02/25 22:11:54 by abita            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Write a program that displays "Hello World!" followed by a \n.*/

#include <unistd.h>

int	main()
{
	write(1, "Hello World!\n", 12);
	return (0);
}
