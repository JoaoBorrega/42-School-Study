/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmachado <cmachado@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 14:54:16 by cmachado          #+#    #+#             */
/*   Updated: 2022/01/27 17:11:15 by cmachado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != 0)
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	src_size;
	unsigned int	dest_size;
	unsigned int	result;

	src_size = ft_strlen(src);
	dest_size = ft_strlen(dest);
	if (size <= dest_size)
		result = src_size + size;
	else
		result = dest_size + src_size;
	while (*src && (dest_size + 1 < size))
	{
		dest[dest_size] = *src;
		src++;
		dest_size++;
	}
	dest[dest_size] = '\0';
	return (result);
}

/*int	main(void)
{
	char	my_a[6] = "hello";
	char	*my_src;
	char	*my_dest;
	int		my_b;
	char	f_a[6] = "hello";
	char	*f_src;
	char	*f_dest;
	int		f_b;

	my_src = " world";
	my_dest = my_a;
	my_b = ft_strlcat(my_dest, my_src, 8);
	printf("my str: %s\n", my_dest);
	printf("my ret: %d\n", my_b);

	f_src = " world";
	f_dest = f_a;
	f_b = strlcat(f_dest, f_src, 8);
	printf("fc str: %s\n", f_dest);
	printf("fc ret: %d", f_b);
}*/
