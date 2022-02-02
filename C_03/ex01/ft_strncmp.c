/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnabeiro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 14:45:59 by jnabeiro          #+#    #+#             */
/*   Updated: 2022/01/27 16:40:43 by jnabeiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	c;

	c = 0;
	if (n == 0)
		return (0);
	while ((s1[c] == s2[c]) && (c < n - 1)
		&& (s1[c] != '\0') && (s2[c] != '\0'))
	{
		c++;
	}
	return (s1[c] - s2[c]);
}
