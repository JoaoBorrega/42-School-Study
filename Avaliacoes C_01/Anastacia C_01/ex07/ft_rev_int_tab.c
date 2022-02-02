/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ansilva- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 16:45:29 by ansilva-          #+#    #+#             */
/*   Updated: 2022/01/25 17:35:51 by jnabeiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	tab2[];
	int	i;
	int	j;

	i = 0;
	j = size - 1;
	while (i < size && j >= 0)
	{
		tab2[i] = tab[j];
		i++;
		j--;
	}
}
/*
#include <stdio.h>
int	main()
{
	int	tab[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	int	n;

	n = 10;
	ft_rev_int_tab(tab, 10);
	return (0);
}*/
