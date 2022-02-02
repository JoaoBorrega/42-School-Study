/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smagalha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 16:18:12 by smagalha          #+#    #+#             */
/*   Updated: 2022/01/27 16:18:15 by smagalha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	main(int argc, char **argv)
{
	int	j;

	j = 0;
	while (argc > 1)
	{
		while (argv[argc - 1][j] != '\0')
		{
			write(1, &argv[argc - 1][j], 1);
			j++;
		}
		write(1, "\n", 1);
		j = 0;
		argc--;
	}
}
