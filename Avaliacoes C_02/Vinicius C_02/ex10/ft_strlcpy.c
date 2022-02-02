/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vde-figu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/23 15:27:00 by vde-figu          #+#    #+#             */
/*   Updated: 2022/01/24 16:45:18 by vde-figu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	kuso;
	unsigned int	drit;

	kuso = 0;
	drit = 0;
	while (src[drit])
		drit++;
	if (size < 1)
		return (drit);
	while (src[kuso] && kuso < size - 1)
	{
		dest[kuso] = src[kuso];
		i++;
	}
	dest[kuso] = '\0';
	return (drit);
}
