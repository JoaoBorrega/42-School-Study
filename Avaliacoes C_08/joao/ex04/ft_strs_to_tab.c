/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joacaeta <joacaeta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 19:20:43 by joacaeta          #+#    #+#             */
/*   Updated: 2022/01/29 20:02:43 by joacaeta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (*str != '\0')
	{
		i++;
		str++;
	}	
	return (i);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strdup(char *src)
{
	char	*dest;
	int		srcsize;

	srcsize = 0;
	while (src[srcsize] != '\0')
		srcsize++;
	dest = malloc((srcsize + 1));
	ft_strcpy(dest, src);
	return (dest);
}

struct	s_stock_str	*ft_strs_to_tab(int argc, char **argv)
{
	int					i;
	struct s_stock_str	*arr;
	struct s_stock_str	*arr2;

	arr = malloc(argc + sizeof(struct s_stock_str));
	arr2 = arr;
	i = 0;
	if (arr2 == '\0')
		return (0);
	while (i < argc)
	{
		arr[i].size = ft_strlen(argv[i]);
		arr[i].str = argv[i];
		arr[i].cpy = ft_strdup(argv[i]);
		i++;
	}
	arr[i].str = 0;
	arr[i].cpy = 0;
	return (arr);
}
