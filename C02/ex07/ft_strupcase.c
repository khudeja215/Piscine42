/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khkhan <khkhan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/25 01:51:02 by khudeja           #+#    #+#             */
/*   Updated: 2024/08/25 13:13:59 by khkhan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int	index;

	index = 0;
	while (str[index])
	{
		if (str[index] >= 'a' && str[index] <= 'z')
		{
			str[index] = str[index] - 32;
		}
		index++;
	}
	return (str);
}

// int	main(void)
// {
// 	//char	*sr;
// 	char	*srr;
// 	int		index;

// 	char	sr[] = "hellobeta";
// 	index = 0;
// 	srr = ft_strupcase(sr);
// 	write(1, &srr[1], 1);
// 	return (0);
// }
