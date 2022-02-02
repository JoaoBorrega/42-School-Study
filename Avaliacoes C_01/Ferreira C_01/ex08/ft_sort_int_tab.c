/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wferreir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/22 11:39:56 by wferreir          #+#    #+#             */
/*   Updated: 2022/01/22 11:43:02 by wferreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	l;
	int	c;

	l = 0;
	while (l < size - 1)
	{
		if (tab[l] > tab[l + 1])
		{
			c = tab[l + 1];
			tab[l + 1] = tab[l];
			tab[l] = c;
			l = -1;
		}		
		l++;
	}
}

/*
void	putarr(int arr[], int size)
{
	for (int i = 0; i < (size -1); i++)
        printf("%d, ", arr[i]);
    printf("%d\n", arr[size - 1]);
}

int		main (void)
{
	int tab[] = {8,3,7,2,1,4};
	int size;

	size = 6;

	printf("Original: ");
	putarr(tab, size);

	ft_sort_int_tab(tab, size);

	printf("Modified: ");
	putarr(tab, size);
}
*/
