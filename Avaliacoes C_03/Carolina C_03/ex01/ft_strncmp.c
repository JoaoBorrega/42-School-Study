/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmachado <cmachado@student.42lisboa.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 12:11:26 by cmachado          #+#    #+#             */
/*   Updated: 2022/01/25 12:11:28 by cmachado         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;
	int				diff;

	i = 0;
	diff = 0;
	while (!(s1[i] == '\0' && s2[i] == '\0') && diff == 0 && i < n)
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

	s1 = "Hellofa";
	s2 = "Hello";
	result = ft_strncmp(s1, s2, 8);
	printf("%d", result);
}*/