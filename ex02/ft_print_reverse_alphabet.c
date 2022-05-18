/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chermida <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/15 20:15:33 by chermida          #+#    #+#             */
/*   Updated: 2022/05/17 10:31:25 by chermida         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_print_reverse_alphabet(void)

{
	write(1, "zyxwvutsrqponmlkjihgfedcba", 26);
}

/*
int	main(void)
{
	ft_print_reverse_alphabet();
	return (0);
}
*/
