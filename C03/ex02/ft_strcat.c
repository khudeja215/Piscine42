/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khkhan <khkhan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/25 17:21:48 by khkhan            #+#    #+#             */
/*   Updated: 2024/08/26 17:03:10 by khkhan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	siz;
	int	i;

	siz = 0;
	i = 0;
	while (dest[i])
	{
		i++;
	}
	while (src[siz])
	{
		dest[i] = src[siz];
		siz++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

// int	main(void)
// {
// 	char	src[] = "a good girl";
// 	char	dest[100] = "khudeja is";

// 	printf("%s\n", ft_strcat(dest, src));
// 	printf("%s\n", strcat(dest, src));
// 	return (0);
// }
