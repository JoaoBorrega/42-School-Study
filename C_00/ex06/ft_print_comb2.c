/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: learodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/17 18:47:30 by learodri          #+#    #+#             */
/*   Updated: 2022/01/17 18:52:26 by learodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

char	transform_to_char(int n, int pos)
{
	if (pos == 0)
	{
		return (n / 10 + '0');
	}
	else
	{
		return (n % 10 + '0');
	}
}

void	ft_print_comb2(void)
{
	int	x;
	int	y;

	x = -1;
	while (x++ <= 99)
	{
		y = x;
		while (y++ < 99)
		{
			ft_putchar(transform_to_char(x, 0));
			ft_putchar(transform_to_char(x, 1));
			ft_putchar(' ');
			ft_putchar(transform_to_char(y, 0));
			ft_putchar(transform_to_char(y, 1));
			if (!(x == 98 && y == 99))
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
		}
	}
}
