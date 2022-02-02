/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_last_param.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnabeiro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 15:12:47 by jnabeiro          #+#    #+#             */
/*   Updated: 2022/02/01 15:20:24 by jnabeiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Write a program that takes strings as arguments, and displays its last
argument followed by a newline.

If the number of arguments is less than 1, the program displays a newline.

Examples:

$> ./aff_last_param "zaz" "mange" "des" "chats" | cat -e
chats$
$> ./aff_last_param "j'aime le savon" | cat -e
j'aime le savon$
$> ./aff_last_param
$*/

#include <unistd.h>

int	main(int argc, char *argv[])
{
	int	i;

	i = -1;
	if (argc > 1)
	{
		while (argv[argc - 1][++i])
		{
			write(1, &argv[argc - 1][i], 1);
		}
	}
	write(1, "\n", 1);
	return (0);
}
