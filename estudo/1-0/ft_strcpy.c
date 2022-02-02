/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnabeiro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 16:01:29 by jnabeiro          #+#    #+#             */
/*   Updated: 2022/02/01 16:12:59 by jnabeiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Reproduce the behavior of the function strcpy (man strcpy).

Your function must be declared as follows:

char    *ft_strcpy(char *s1, char *s2);*/

#include <stdio.h>

char	*ft_strcpy(char *s1, char *s2)
{
	int	c;

	c = 0;
	while (s2[c] != '\0')
	{
		s1[c] = s2[c];
		c++;
	}
	s1[c] = '\0';
	return (s1);
}	
