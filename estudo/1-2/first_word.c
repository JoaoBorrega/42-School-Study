/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_word.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnabeiro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 16:58:55 by jnabeiro          #+#    #+#             */
/*   Updated: 2022/02/01 17:15:58 by jnabeiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Write a program that takes a string and displays its first word, followed by a
newline.

A word is a section of string delimited by spaces/tabs or by the start/end of
the string.

If the number of parameters is not 1, or if there are no words, simply display
a newline.

Examples:

$> ./first_word "FOR PONY" | cat -e
FOR$
$> ./first_word "this        ...       is sparta, then again, maybe    not" | cat -e
this$
$> ./first_word "   " | cat -e
$
$> ./first_word "a" "b" | cat -e
$
$> ./first_word "  lorem,ipsum  " | cat -e
lorem,ipsum$
$>*/

#include <unistd.h>

int	main(int ac, char **av)
{
	if (ac == 2)
	{
		while (*av[1] && (*av[1] == ' ' || *av[1] == '\t' || *av[1] == '\n'
				|| *av[1] == '\r' || *av[1] == '\v' || *av[1] == '\f'))
			++av[1];
		while (*av[1] != '\0' && (*av[1] != ' ' && *av[1] != '\t' && *av[1] != '\n'
				&& *av[1] != '\r' && *av[1] != '\v' && *av[1] != '\f'))
			write(1, av[1]++, 1);
	}
	write(1, "\n", 1);
	return (0);
}
