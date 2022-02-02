/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joacaeta <joacaeta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 19:51:12 by joacaeta          #+#    #+#             */
/*   Updated: 2022/01/29 20:11:54 by joacaeta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_stock_str.h"

struct	s_stock_str	*ft_strs_to_tab(int argc, char **argv);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	while (*str != '\0')
	{
		ft_putchar(*str);
		str++;
	}
}

void	ft_putnbr2(int nb, int *alln, int mod, int a)
{	
	char	c;

	c = '-';
	if (nb == 0)
		alln[a] = 48;
	if (nb < 0)
	{	
		write(1, &c, 1);
		nb = -1 * nb;
		while (nb > 0)
		{
			mod = (nb % 10) + 48;
			alln[a] = mod;
			a--;
			nb = nb / 10;
		}
	}
	write(1, &alln, sizeof(alln));
}

void	ft_putnbr(int nb)
{
	int		alln[9];
	int		a;
	int		mod;
	char	c;

	c = '-';
	a = 8;
	if (nb > 0)
	{
		while (nb > 0)
		{
			mod = (nb % 10) + 48;
			alln[a] = mod;
			a--;
			nb = nb / 10;
		}
	}
	ft_putnbr2(nb, alln, mod, a);
}

void	ft_show_tab(struct s_stock_str *par)
{
	int	i;

	i = 0;
	while (par[i].str != 0)
	{
		ft_putstr(par[i].str);
		ft_putstr("\n");
		ft_putnbr(par[i].size);
		ft_putstr("\n");
		ft_putstr(par[i].cpy);
		ft_putstr("\n");
		i++;
	}
}
