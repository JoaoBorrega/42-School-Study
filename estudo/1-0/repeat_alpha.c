/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnabeiro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 16:17:32 by jnabeiro          #+#    #+#             */
/*   Updated: 2022/02/01 16:26:42 by jnabeiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Write a program called repeat_alpha that takes a string and display it
repeating each alphabetical character as many times as its alphabetical index,
followed by a newline.

'a' becomes 'a', 'b' becomes 'bb', 'e' becomes 'eeeee', etc...

Case remains unchanged.

If the number of arguments is not 1, just display a newline.

Examples:

$>./repeat_alpha "abc"
abbccc
$>./repeat_alpha "Alex." | cat -e
Alllllllllllleeeeexxxxxxxxxxxxxxxxxxxxxxxx.$
$>./repeat_alpha 'abacadaba 42!' | cat -e
abbacccaddddabba 42!$
$>./repeat_alpha | cat -e
$
$>
$>./repeat_alpha "" | cat -e
$
$>*/

#include <unistd.h>

int	main(int ac, char **av)
{
	int	letter;
	int	repeat;

	if (ac == 2)
	{
		letter = 0;
		while (av[1][letter])
		{
			repeat = 1;
			if (av[1][letter] >= 'a' && av[1][letter] <= 'z')
				repeat += av[1][letter] - 'a';
			else if (av[1][letter] >= 'A' && av[1][letter] <= 'Z')
				repeat += av[1][letter] - 'A';
			while (repeat)
			{
				write(1, &av[1][letter], 1);
				repeat--;
			}
			letter++;
		}
	}
	write(1, "\n", 1);
	return (0);
}
