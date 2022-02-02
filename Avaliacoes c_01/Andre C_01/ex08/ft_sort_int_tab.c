/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: asousa-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 08:33:22 by asousa-l          #+#    #+#             */
/*   Updated: 2022/01/18 08:56:32 by asousa-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdbool.h>

void	ft_swap(int *a, int *b)
{
	int	c;

	c = *a;
	*a = *b;
	*b = c;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int		r;
	int		ind;
	bool	swapped;

	r = 0;
	while (true)
	{
		swapped = false;
		ind = 0;
		while (ind < size)
		{
			if (tab[ind] > tab[ind + 1])
			{
				ft_swap(&tab[ind], &tab[ind + 1]);
				swapped = true;
			}
			ind++;
		}
		if (!swapped)
		{
			break ;
		}
		r++;
	}
}
