/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amarques <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 17:05:59 by amarques          #+#    #+#             */
/*   Updated: 2022/01/26 19:01:09 by amarques         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	index;
	unsigned int	count;

	count = 0;
	while (src[count])
		count++;
	index = 0;
	if (size != 0)
	{
		while (src[index] != '\0' && index < (size - 1))
		{
			dest[index] = src[index];
			index++;
		}
		dest[index] = '\0';
	}
	return (count);
}

/*int	main(void)
{
	char	*string1;
	char	string2[123];

	string1 = "asbdajsd";
	printf("base   : %s\n", string1);
	strlcpy(string2, string1, 8);
	printf("cpy c  : %s\n", string2);
	ft_strlcpy(string2, string1, 8);
	printf("cpy ft : %s\n", string2);
}*/
