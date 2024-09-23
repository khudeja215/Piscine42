/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khkhan <khkhan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/25 13:40:30 by khkhan            #+#    #+#             */
/*   Updated: 2024/08/26 17:00:00 by khkhan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	index;

	index = 0;
	while (s1[index] || s2[index])
	{
		if (s1[index] == s2[index])
		{
			index++;
		}
		else
		{
			return (s1[index] - s2[index]);
		}
	}
	return (0);
}

// int	main(void)
// {
// 	char	*str1;
// 	char	*str2;

// 	str1 = "banana123";
// 	str2 = "banana";
// 	printf("%d", ft_strcmp(str1, str2));
// 	printf("%d", strcmp(str1, str2));
// }
