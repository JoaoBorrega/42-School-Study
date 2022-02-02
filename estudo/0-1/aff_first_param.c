/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_first_param.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnabeiro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 15:01:49 by jnabeiro          #+#    #+#             */
/*   Updated: 2022/02/01 15:09:22 by jnabeiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Write a program that takes strings as arguments, and displays its first
argument followed by a \n.

If the number of arguments is less than 1, the program displays \n.

Example:

$> ./aff_first_param vincent mit "l'ane" dans un pre et "s'en" vint | cat -e
vincent$
$> ./aff_first_param "j'aime le fromage de chevre" | cat -e
j'aime le fromage de chevre$
$> ./aff_first_param
$*/

int	main(int argc, char *argv[])
{
	int	i;

	i = 0;
	if (argc < 2)
	{
		write(1, "\n", 1);
	}
	else
	{
		while (argv[1][i])
		{
			write(1, &argv[1][i++], 1);
		}
		write(1, "\n", 1);
	}
	return (0);
}
