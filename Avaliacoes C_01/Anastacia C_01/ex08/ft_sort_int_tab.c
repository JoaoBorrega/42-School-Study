/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ansilva- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/22 10:46:22 by ansilva-          #+#    #+#             */
/*   Updated: 2022/01/22 15:18:45 by jnabeiro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
 # include <stdio.h>
void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;

	i = 0;
	while (i < size - 1)
	{
		if (tab[i] > tab[i + 1])
		{
			ft_swap(&tab[i], &tab[i + 1]);
			i = -1;
		}
		i++;
	}
}
int	main()
{
	int tab[16] = {3, 2, 6, 1, 5, 9, 7, 0, 4, 7, 2, 8, 1, 4, 6, 9};

	ft_sort_int_tab(tab, 16);
   	int i;

	i = 0;
	while (i < 16)
	{
		printf("%d\n", tab[i]);
		i++;
	}
}
