/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmachado <cmachado@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 12:35:46 by cmachado          #+#    #+#             */
/*   Updated: 2022/01/25 12:35:47 by cmachado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strcat(char *dest, char *src)
{
	int	size;
	int	i;

	size = 0;
	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[size] != '\0')
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
	ft_strcat(dest, src);
	write(1, dest, 11);
}*/