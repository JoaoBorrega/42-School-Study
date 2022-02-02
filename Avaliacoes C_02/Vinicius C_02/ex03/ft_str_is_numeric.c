/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-figu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/22 18:56:20 by vde-figu          #+#    #+#             */
/*   Updated: 2022/01/24 09:27:08 by vde-figu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	blyat;

	blyat = 0;
	if (str[blyat] == 0)
		return (1);
	while (str[blyat] != 0)
	{
		if (str[blyat] < '0' || str[blyat] > '9')
			return (0);
		blyat++;
	}
	return (1);
}
