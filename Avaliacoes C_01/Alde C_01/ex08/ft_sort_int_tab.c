/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fde-albe <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 09:57:04 by fde-albe          #+#    #+#             */
/*   Updated: 2022/01/18 15:47:53 by fde-albe         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	b;
	int	swap;
	int	a;

	b = 0;
	while (b < size)
	{
		a = b;
		if (tab[a] > tab [a + 1])
		{
			while (tab[a] > tab[a + 1])
			{
				swap = tab[a];
				tab[a] = tab[a + 1];
				tab[a + 1] = swap;
				a++;
			}
			b = 0;
		}
		else
		{
			b++;
		}
	}
}
