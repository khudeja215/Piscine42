/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khkhan <khkhan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/23 20:01:07 by khudeja           #+#    #+#             */
/*   Updated: 2024/08/25 17:14:24 by khkhan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	char	*ptr;

	ptr = dest;
	while (*src != '\0')
	{
		*dest = *src;
		src ++;
		dest++;
	}
	*dest = '\0';
	return (ptr);
}

// int	main(void)
// {
// // 	char*	sr;
// // 	char	des[20];
// // 	int	index;

// // 	sr = "hellobeta";
// // 	index = 0;
// // 	ft_strcpy(des, sr);
// // 	while (index < 9)
// // 	{
// // 		write(1, &des[index], 1);
// // 		index ++;
// // 	}
// 	return (0);
// }
