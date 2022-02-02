/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-figu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/22 19:00:20 by vde-figu          #+#    #+#             */
/*   Updated: 2022/01/24 09:27:44 by vde-figu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	blyat;

	blyat = 0;
	if (str[blyat] == 0)
		return (1);
	while (str[blyat] != 0)
	{
		if (str[blyat] < 'a' || str[blyat] > 'z')
			return (0);
		blyat++;
	}
	return (1);
}
