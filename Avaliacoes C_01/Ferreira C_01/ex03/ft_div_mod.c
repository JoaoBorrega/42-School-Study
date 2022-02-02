/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wferreir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 14:12:44 by wferreir          #+#    #+#             */
/*   Updated: 2022/01/21 14:16:07 by wferreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	if (b != 0)
	*div = a / b;
	*mod = a % b;
}

/*
int	main(void)
{
	int a;
	int b;
	int *x1;
	int *x2;	
	a = 20;
	b = 3;
	x1 = &a;
	x2 = &b;
	ft_div_mod(a, b, x1, x2);
	printf("%d\n", *x1);
	printf("%d\n", *x2);
}
*/