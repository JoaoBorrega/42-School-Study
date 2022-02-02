/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   only_a.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnabeiro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 15:53:27 by jnabeiro          #+#    #+#             */
/*   Updated: 2022/02/01 15:54:15 by jnabeiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Write a program that displays a 'a' character on the standard output.*/

#include <unistd.h>

int	main(void)
{
	write(1, "a", 1);
	return (0);
}
