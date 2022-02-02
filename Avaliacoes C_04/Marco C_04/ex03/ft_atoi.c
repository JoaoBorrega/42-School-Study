/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mdoroana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/30 15:56:38 by mdoroana          #+#    #+#             */
/*   Updated: 2022/01/31 14:52:45 by mdoroana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

int	white_spaces(char *str)
{
	int	i;

	i = 0;
	while (str[i] == '\t' || str[i] == '\n' || str[i] == '\v'
		|| str[i] == '\f' || str[i] == '\r' || str[i] == ' ')
		i++;
	return (i);
}

int	ft_atoi(char *str)
{
	int	nb;
	int	i;
	int	sig;

	i = white_spaces(str);
	sig = 1;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sig *= -1;
		i++;
	}
	nb = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= '0' && str[i] <= '9')
			nb = nb * 10 + (str[i] - '0');
		else
			break ;
		i++;
	}
	nb *= sig;
	return (nb);
}
/*
int main()
{
	printf("%d\n", ft_atoi(" 	\n--+---+dddd"));
}*/
