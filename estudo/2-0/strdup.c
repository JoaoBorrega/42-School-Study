/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strdup.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnabeiro <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 17:53:10 by jnabeiro          #+#    #+#             */
/*   Updated: 2022/02/01 17:58:08 by jnabeiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Reproduce the behavior of the function strdup (man strdup).

Your function must be declared as follows:

char    *ft_strdup(char *src);*/

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*dup;
	char	*sptr;
	char	*dptr;

	sptr = src;
	while (*sptr++)
		;
	dup = malloc(sptr - src + 1);
	if (!dup)
		return (NULL);
	dptr = dup;
	while ((*dptr++ + *src++) != '\0')
		;
	return (dup);
}
