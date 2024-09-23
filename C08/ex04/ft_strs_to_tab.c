/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khkhan <khkhan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/06 16:11:27 by khkhan            #+#    #+#             */
/*   Updated: 2024/09/06 16:26:30 by khkhan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "ft_stock_str.h"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strdup(char *str)
{
	int		i;
	char	*str1;

	str1 = (char *) malloc(sizeof(char) * (ft_strlen(str) + 1));
	if (!str1)
		return (NULL);
	i = 0;
	while (str[i])
	{
		str1[i] = str[i];
		i++;
	}
	str1[i] = '\0';
	return (str1);
}

struct s_stock_str	*ft_strs_to_tab(int argc, char **argv)
{
	struct s_stock_str	*str1;
	int					i;

	str1 = (t_stock_str *) malloc(sizeof(t_stock_str) * (argc + 1));
	if (!str1)
		return (NULL);
	i = 0;
	while (i < argc)
	{
		if (argv[i] == NULL)
			return (NULL);
		str1[i].size = ft_strlen(argv[i]);
		str1[i].str = ft_strdup(argv[i]);
		str1[i].copy = ft_strdup(argv[i]);
		if (str1[i].str == NULL || str1[i].copy == NULL)
			return (NULL);
		i++;
	}
	str1[i].str = NULL;
	return (str1);
}
