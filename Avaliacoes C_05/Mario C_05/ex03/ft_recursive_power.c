/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgranate <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/29 15:11:33 by mgranate          #+#    #+#             */
/*   Updated: 2022/01/29 18:58:56 by mgranate         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	int	sum;

	sum = nb;
	if (sum > sum * nb)
		return (0);
	else if (power > 1)
		return (sum * ft_recursive_power(nb, power -1));
	else if (power == 0)
		return (1);
	else if (power < 0)
		return (0);
	else
		return (sum);
}
