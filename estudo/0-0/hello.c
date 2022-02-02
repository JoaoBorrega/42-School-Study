/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hello.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnabeiro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 14:35:18 by jnabeiro          #+#    #+#             */
/*   Updated: 2022/02/01 14:39:43 by jnabeiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Write a program that displays "Hello World!" followed by a \n.

Example:

$>./hello
Hello World!
$>./hello | cat -e
Hello World!$
$>*/

#include <unistd.h>

int	main(void)
{
	write(1, "Hello World!\n", 13);
	return (0);
}
