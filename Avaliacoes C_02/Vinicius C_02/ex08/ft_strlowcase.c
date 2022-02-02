/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-figu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/22 19:19:41 by vde-figu          #+#    #+#             */
/*   Updated: 2022/01/24 14:44:12 by vde-figu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	scheisse;

	scheisse = 0;
	while (str[scheisse] != 0)
	{
		if (str[scheisse] >= 'A' && str[scheisse] <= 'Z')
			str[scheisse] += 32;
		scheisse++;
	}
	return (str);
}
