/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlen.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnabeiro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 16:14:51 by jnabeiro          #+#    #+#             */
/*   Updated: 2022/02/01 16:19:38 by jnabeiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Write a function that returns the length of a string.

Your function must be declared as follows:

int	ft_strlen(char *str);*/

#include <stdio.h>

int	ft_strlen(char *str)
{
	int	c;

	c = 0;
	while (*str != 0)
	{
		c++;
		str++;
	}
	retur (c);
}
