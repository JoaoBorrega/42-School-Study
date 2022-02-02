/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_coutdown.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnabeiro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 14:17:08 by jnabeiro          #+#    #+#             */
/*   Updated: 2022/02/01 14:35:05 by jnabeiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Write a program that displays all digits in descending order, followed by a
newline.
Example:
$> ./ft_countdown | cat -e
9876543210$
$>*/

#include <unistd.h>

void	ft_putchar(char x)
{
	write(1, &x, 1);
}

void	ft_countdown(void)
{
	char	x;

	x = '9';
	while (x >= '0')
	{
		ft_putchar(x);
		x--;
	}
}
