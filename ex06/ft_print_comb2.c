/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chermida <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 16:48:27 by chermida          #+#    #+#             */
/*   Updated: 2022/05/17 13:41:00 by chermida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print(char n1, char n2, char n3, char n4)
{
	ft_putchar(n1 + 48);
	ft_putchar(n2 + 48);
	ft_putchar(' ');
	ft_putchar(n3 + 48);
	ft_putchar(n4 + 48);
	if (n1 != 9 || n2 != 8)
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_comb2(void)
{
	int	x;
	int	y;

	x = 0;
	y = 1;
	while (x <= 98)
	{
		while (y <= 99)
		{
			print(x / 10, x % 10, y / 10, y % 10);
			y++;
		}
		x++;
		y = x + 1;
	}
}

/*
int	main(void)
{
	ft_print_comb2();
	return (0);
}
*/
