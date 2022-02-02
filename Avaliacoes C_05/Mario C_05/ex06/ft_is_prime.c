/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgranate <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/29 16:22:27 by mgranate          #+#    #+#             */
/*   Updated: 2022/01/29 16:36:31 by mgranate         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_is_prime(int nb)
{
	int	div;

	if (nb < 2)
		return (0);
	div = 2;
	while (nb % div != 0 && div < ((nb / div) + (nb % div)))
		div++;
	if (nb % div == 0 && nb != 2)
		return (0);
	else
		return (1);
}
/*
int main()
{
    printf("%d\n", ft_is_prime(2));
    printf("%d\n", ft_is_prime(0));
    printf("%d\n", ft_is_prime(1));
    printf("%d\n", ft_is_prime(9));
    printf("%d\n", ft_is_prime(2147483647));
}
*/
