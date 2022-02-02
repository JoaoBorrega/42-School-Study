/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncardoso <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 19:56:01 by ncardoso          #+#    #+#             */
/*   Updated: 2022/01/27 13:30:32 by ncardoso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv )
{
	int	i;
	int	j;

	j = argc - 1 ;
	while (j > 0)
	{
		i = 0;
		while (argv[j][i] != 0)
		{
			write(1, &argv[j][i], 1);
			i++;
		}
		write(1, "\n", 1);
		j--;
	}
}
