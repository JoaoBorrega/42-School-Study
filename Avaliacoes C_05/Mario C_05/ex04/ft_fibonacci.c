/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgranate <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/29 15:13:37 by mgranate          #+#    #+#             */
/*   Updated: 2022/01/29 18:59:00 by mgranate         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	else if (index == 0)
		return (0);
	else if (index == 1)
		return (1);
	else
		return (ft_fibonacci(index - 2) + ft_fibonacci(index -1));
}
/*
int main()
{
	printf("%d\n",ft_fibonacci(8));
	printf("%d\n",ft_fibonacci(0));
	printf("%d\n",ft_fibonacci(-1));
}
*/
