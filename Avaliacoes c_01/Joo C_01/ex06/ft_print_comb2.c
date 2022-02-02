/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joacorre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 16:04:56 by joacorre          #+#    #+#             */
/*   Updated: 2022/01/22 14:12:05 by jnabeiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include  <unistd.h>

void	dezenas_unidades(char mil_cen[2], char dez_uni[2])
{
dez_uni[0] = '0';
	while (dez_uni[0] <= '9')
	{
		dez_uni[1] = '0';
		if (dez_uni[0] == '0')
		{
			dez_uni[1] = mil_cen[1] + 1;
		}
		while (dez_uni[1] <= '9')
		{
			write(1, &mil_cen[0], 2);
			write(1, " ", 1);
			write(1, &dez_uni[0], 2);
			if (mil_cen[0] == '9' && mil_cen[1] == '8')
				if (dez_uni[0] == '9' && dez_uni[1] == '9')
					break ;
			write(1, ", ", 2);
		dez_uni[1]++;
		}
	dez_uni[0]++;
	}
}

void	ft_print_comb2(void)
{
	char	a[2];
	char	b[2];

	a[0] = '0';
	while (a[0] <= '9')
	{
		a[1] = '0';
		while (a[1] <= '8')
		{
			dezenas_unidades(a, b);
		a[1]++;
		}
	a[0]++;
	}
}

int	main(void)
{
	ft_print_comb2();
	return (0);
}
