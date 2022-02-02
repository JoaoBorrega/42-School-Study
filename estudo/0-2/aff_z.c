/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_z.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnabeiro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 15:56:09 by jnabeiro          #+#    #+#             */
/*   Updated: 2022/02/01 15:59:24 by jnabeiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Write a program that takes a string, and displays the first 'z'
character it encounters in it, followed by a newline. If there are no
'z' characters in the string, the program writes 'z' followed
by a newline. If the number of parameters is not 1, the program displays
'z' followed by a newline.

Example:

$> ./aff_z "abc" | cat -e
z$
$> ./aff_z "dubO a POIL" | cat -e
z$
$> ./aff_z "zaz sent le poney" | cat -e
z$
$> ./aff_z | cat -e
z$*/

#include <unistd.h>

#include <unistd.h>

int	main(int argc, char **argv)
{
	(void)argc;
	(void)argv;
	write(1, "z\n", 2);
	return (0);
}
