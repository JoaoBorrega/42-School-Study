/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgranate <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/29 15:19:17 by mgranate          #+#    #+#             */
/*   Updated: 2022/01/29 18:59:11 by mgranate         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	nu;

	nu = 0;
	while (nu < nb)
	{
		if ((nu * nu) == nb)
			return (nu);
		nu ++;
	}
	return (0);
}
/*
int main()
{
    printf("%d\n", ft_sqrt(16));
    printf("%d\n", ft_sqrt(32));
    printf("%d\n", ft_sqrt(4));
    printf("%d\n", ft_sqrt(2));
    printf("%d\n", ft_sqrt(-20));
}
*/
