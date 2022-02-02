/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-figu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/22 19:06:17 by vde-figu          #+#    #+#             */
/*   Updated: 2022/01/24 09:28:39 by vde-figu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	blyat;

	blyat = 0;
	if (str[blyat] == 0)
		return (1);
	while (str[blyat] != 0)
	{
		if (str[blyat] <= 31 || str[blyat] == 127)
			return (0);
		blyat++;
	}
	return (1);
}
