/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maff_revalpha.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnabeiro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/03 11:49:39 by jnabeiro          #+#    #+#             */
/*   Updated: 2022/02/03 12:04:23 by jnabeiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(void)
{
	char	z;
	char	y;

	y = 'Y';
	z = 'z';
	while (z >= 'a' && y >= 'A')
	{
		write(1, &z, 1);
		write(1, &y, 1);
		z -= 2;
		y -= 2;
	}
	return (0);
}
