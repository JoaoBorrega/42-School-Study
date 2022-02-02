/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmachado <cmachado@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 13:43:06 by cmachado          #+#    #+#             */
/*   Updated: 2022/01/25 13:43:08 by cmachado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	size;
	int				i;

	size = 0;
	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[size] != '\0' && size < nb)
	{
		dest[i] = src[size];
		size++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

/*int	main(void)
{
	char	a[20] = "Hello ";
	char	*dest;
	char	*src;

	src = "World";
	dest = a;
	ft_strncat(dest, src, 2);
	write(1, dest, 11);
}*/