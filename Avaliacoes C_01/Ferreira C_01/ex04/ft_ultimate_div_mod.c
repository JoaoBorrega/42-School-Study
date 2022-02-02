/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wferreir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 14:32:02 by wferreir          #+#    #+#             */
/*   Updated: 2022/01/21 14:32:18 by wferreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	rest;

	if (b != 0)
	{
	div = (*a) / (*b);
	rest = (*a) % (*b);
	*a = div;
	*b = rest;
	}
}

/*int main(void)
{
	int a;
	int b;
	int *x1;
	int *x2;
	
	a = 5;
	b = 2;
	x1 = &a;
	x2 = &b;

	ft_ultimate_div_mod(x1, x2);
	printf("%d\n", *x1);	
	printf("%d\n", *x2);
}
*/
