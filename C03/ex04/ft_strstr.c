/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khkhan <khkhan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 13:59:21 by khkhan            #+#    #+#             */
/*   Updated: 2024/08/26 16:38:52 by khkhan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	if (to_find[0] == '\0')
	{
		return (str);
	}
	while (str[i] != '\0')
	{
		j = 0;
		while (str[i + j] == to_find[j])
		{
			if (to_find[j + 1] == '\0')
			{
				return (&str[i]);
			}
			j++;
		}
		i++;
	}
	return (NULL);
}

// int	main(void)
// {
// 	char	*strhay;
// 	char	*strneed;
// 	char	*ret;

// 	strhay = "haystachneedle";
// 	strneed = "";
// 	// ret = strstr(strhay, strneed);
// 	ret = ft_strstr(strhay, strneed);
// 	printf("%s\n", ret);
// 	return (0);
// }
