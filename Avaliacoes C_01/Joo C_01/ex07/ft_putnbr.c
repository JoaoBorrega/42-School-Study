/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joacorre <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 21:38:30 by joacorre          #+#    #+#             */
/*   Updated: 2022/01/22 14:23:58 by jnabeiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	obter_numero(int n)
{
	int		resto;
	char	numero[10];
	char	numero_inverso[10];
	int		contar;
	int		contar_inverso;

	contar = 0;
	while (n > 0)
	{
		resto = n % 10;
		numero[contar] = resto + '0';
		contar++;
		n = n / 10;
	}
	contar_inverso = contar;
	contar = 0;
	while (contar_inverso > 0)
	{
		numero_inverso[contar] = numero[contar_inverso -1];
		contar_inverso--;
		contar++;
	}
	write(1, numero_inverso, contar);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		write(1, "-2", 2);
		nb = 147483648;
		ft_putnbr(147483648);
	}
	else if (nb < 0)
	{
		write(1, "-", 1);
		nb = nb * -1;
		ft_putnbr(nb);
	}
	else if (nb > 0)
	{
		obter_numero(nb);
	}
	else if (nb == 0)
	{
		write(1, "0", 1);
	}
}

int main()
{
	ft_putnbr(313);
	return 0;
}
