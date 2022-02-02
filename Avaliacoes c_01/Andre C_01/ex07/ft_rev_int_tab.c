/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asousa-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 08:27:22 by asousa-l          #+#    #+#             */
/*   Updated: 2022/01/18 08:51:54 by asousa-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdbool.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	ind;
	int	a;

	ind = 0;
	while (ind < size / 2)
	{
		a = tab[ind];
		tab[ind] = tab[size - 1 - ind];
		tab[size -1 - ind] = a;
		ind++;
	}
}
