/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-figu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/22 19:02:40 by vde-figu          #+#    #+#             */
/*   Updated: 2022/01/24 09:28:24 by vde-figu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	blyat;

	blyat = 0;
	if (str[blyat] == 0)
		return (1);
	while (str[blyat] != 0)
	{
		if (str[blyat] < 'A' || str[blyat] > 'Z')
			return (0);
		blyat++;
	}
	return (1);
}
