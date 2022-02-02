/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maff_revalpha.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnabeiro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 15:24:22 by jnabeiro          #+#    #+#             */
/*   Updated: 2022/02/01 15:51:14 by jnabeiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Write a program that displays the alphabet in reverse, with even letters in
uppercase, and odd letters in lowercase, followed by a newline.

Example:

$> ./maff_revalpha | cat -e
zYxWvUtSrQpOnMlKjIhGfEdCbA$*/

#include <unistd.h>

int	main(int argc, char *argv[])
{
	write(1, "zYxWvUtSrQpOnMlKjIhGfEdCbA\n", 27);
}
