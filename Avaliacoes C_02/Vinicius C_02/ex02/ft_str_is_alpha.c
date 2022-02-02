/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-figu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/22 18:46:30 by vde-figu          #+#    #+#             */
/*   Updated: 2022/01/24 09:25:49 by vde-figu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	v;

	v = 0;
	if (str[v] == 0)
		return (1);
	while (str[v] != 0)
	{
		if (str[v] < 'a' || str[v] > 'z')
			if (str[v] < 'A' || str[v] > 'Z')
				return (0);
		v++;
	}
	return (1);
}
