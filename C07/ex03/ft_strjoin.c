/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khkhan <khkhan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 11:54:35 by khkhan            #+#    #+#             */
/*   Updated: 2024/09/04 20:37:21 by khkhan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*newstr;
	int		i;
	int		j;
	int		c;

	newstr = malloc(sizeof(strs));
	i = 0;
	c = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j] != '\0')
		{
			newstr[c++] = strs[i][j++];
		}
		j = 0;
		while (sep[j] != '\0' && i != size - 1)
		{
			newstr[c++] = sep[j++];
		}
		i++;
	}
	newstr[c] = '\0';
	return (newstr);
}

// int	main(void)
// {
// 	char *tab[4];
// 	tab[0] = "i ";
// 	tab[1] = "a";
// 	tab[2] = " ";
// 	tab[3] = " ";
// 	printf("%s", ft_strjoin(2, tab, "khudeja"));
// 	return (0);
// }