/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khkhan <khkhan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/25 16:24:01 by khkhan            #+#    #+#             */
/*   Updated: 2024/08/26 17:00:42 by khkhan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int				index;
	unsigned int	i;

	i = 0;
	index = 0;
	while ((s1[index] || s2[index]) && i < n)
	{
		if (s1[index] == s2[index])
		{
			index++;
		}
		else
		{
			return (s1[index] - s2[index]);
		}
		i++;
	}
	return (0);
}

// int	main(void)
// {
// 	char	*str1;
// 	char	*str2;

// 	str1 = "bananaa";
// 	str2 = "banan";
// 	printf("%d", ft_strncmp(str1, str2, 9));
// 	printf("%d", strncmp(str1, str2, 9));
// }
