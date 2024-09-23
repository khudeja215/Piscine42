/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khkhan <khkhan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 09:48:46 by khkhan            #+#    #+#             */
/*   Updated: 2024/09/04 20:22:36 by khkhan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		size;
	char	*dest;
	int		i;

	size = 0;
	i = 0;
	while (src[size])
	{
		size++;
	}
	dest = malloc(sizeof(char) * size +1);
	if (dest == NULL)
	{
		return (NULL);
	}
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

// int	main(void)
// {
// 	char	*str;

// 	str = "hello";
// 	ft_strdup(str);
// }
