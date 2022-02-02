/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lowcase.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rode-jes <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/23 18:11:23 by rode-jes          #+#    #+#             */
/*   Updated: 2022/01/26 16:01:37 by rode-jes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
char	*ft_strlowcase(char *str)
{
	int	k;

	k = 0;
	while (str[k])
	{
		if (str[k] >= 'A' && str[k] <= 'Z')
			str[k] = str[k] + 32;
			k++;
	}
	return (str);
}