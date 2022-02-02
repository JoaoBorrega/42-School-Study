/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-figu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/22 19:13:30 by vde-figu          #+#    #+#             */
/*   Updated: 2022/01/23 19:23:28 by vde-figu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int	scheisse;

	scheisse = 0;
	while (str[scheisse] != 0)
	{
		if (str[scheisse] >= 'a' && str[scheisse] <= 'z')
			str[scheisse] -= 32;
		scheisse++;
	}
	return (str);
}
