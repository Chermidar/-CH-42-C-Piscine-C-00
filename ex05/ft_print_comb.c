/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chermida <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 12:17:33 by chermida          #+#    #+#             */
/*   Updated: 2022/05/17 13:13:29 by chermida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print(int h, int t, int u)
{
	ft_putchar(h);
	ft_putchar(t);
	ft_putchar(u);
	if (h != '7' || t != '8' || u != '9')
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_comb(void)
{
	int	h;
	int	t;
	int	u;

	h = '0';
	t = '1';
	u = '2';
	while (h <= '7')
	{
		while (t <= '8')
		{
			while (u <= '9')
			{
				print(h, t, u);
				u++;
			}
			u = ++t + 1;
		}
		t = ++h;
	}
}

/*
int	main(void)
{
	ft_print_comb();
	return (0);
}
*/
