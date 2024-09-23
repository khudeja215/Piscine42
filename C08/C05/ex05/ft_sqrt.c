/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khkhan <khkhan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 17:00:59 by khkhan            #+#    #+#             */
/*   Updated: 2024/09/03 10:15:26 by khkhan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_sqrt(int nb)
{
	int	i;

	i = 1;
	if (nb < 0)
		return (0);
	while (((long long)i * i <= nb))
	{
		if ((long long)i * i == nb)
			return (i);
		i++;
	}
	return (0);
}

// int	main(void)
// {
// 	int	nb;

// 	nb = 2147483649;
// 	printf("%d", ft_sqrt(nb));
// }
