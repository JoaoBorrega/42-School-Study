/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmachado <cmachado@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 11:18:58 by cmachado          #+#    #+#             */
/*   Updated: 2022/01/25 11:18:59 by cmachado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;
	int	diff;

	i = 0;
	diff = 0;
	while (!(s1[i] == '\0' && s2[i] == '\0') && diff == 0)
	{
		if (s1[i] == s2[i])
		{
			i++;
		}
		else
		{
			diff = s1[i] - s2[i];
		}
	}
	return (diff);
}

/*int	main(void)
{
	char	*s1;
	char	*s2;
	int		result;

	s1 = "Hell";
	s2 = "Hello";
	result = ft_strcmp(s1, s2);
	printf("%d", result);
}*/
