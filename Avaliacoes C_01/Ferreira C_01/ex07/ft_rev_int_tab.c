/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wferreir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/22 11:29:46 by wferreir          #+#    #+#             */
/*   Updated: 2022/01/22 11:31:43 by wferreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	p;
	int	u;

	p = 0;
	while (p < size)
	{
		u = tab[(size -1)];
		tab[(size -1)] = tab[p];
		tab[p] = u;
		size--;
		p++;
	}
}

/*
int main ()
{
	int tab[] = {1,2,3,4,5,6,7};
	ft_rev_int_tab(tab, 7);
	for(int i = 0; i < 7; i++)
		printf("%d ", tab[i]);
}*/
