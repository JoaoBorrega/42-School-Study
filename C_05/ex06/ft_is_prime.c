/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnabeiro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 18:05:19 by jnabeiro          #+#    #+#             */
/*   Updated: 2022/01/31 20:43:01 by jnabeiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_is_prime(int nb)
{
	int	n;

	if (nb < 2)
		return (0);
	n = 2;
	while (nb % n != 0 && n < ((nb / n) + (nb % n)))
		n++;
	if (nb % n == 0 && nb != 2)
		return (0);
	else
		return (1);
}