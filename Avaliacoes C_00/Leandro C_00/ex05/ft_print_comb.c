/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: learodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/15 12:28:20 by learodri          #+#    #+#             */
/*   Updated: 2022/01/15 14:32:48 by learodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	regula(char a1, char b2, char c3)
{
	write(1, &a1, 1);
	write(1, &b2, 1);
	write(1, &c3, 1);
	if (a1 != '7' || b2 != '8' || c3 != '9')
	{
		write (1, ", ", 2);
	}
}

void	ft_print_comb(void)
{
	char	d;
	char	e;
	char	f;

	d = '0';
	while (d <= '7')
	{
		e = d + 1;
		while (e <= '8')
		{
			f = e + 1;
			while (f <= '9')
			{
				regula(d, e, f);
				f++;
			}
			e++;
		}
		d++;
	}
}
