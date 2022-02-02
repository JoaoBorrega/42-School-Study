/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wferreir <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/21 13:44:47 by wferreir          #+#    #+#             */
/*   Updated: 2022/01/21 13:50:39 by wferreir         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	holder;

	holder = *a;
	*a = *b;
	*b = holder;
}

/*
int main (void)
{
	int a;
	int b;
	int *ptr1;
	int *ptr2;
	a = 15;
	b = 30
	ptr1 = &a;
	ptr2 = &b;
	ft_swap(ptr1, ptr2);
	printf("%d\n", a);
	printf("%d\n", b);
}
*/