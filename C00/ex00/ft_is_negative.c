/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khkhan <khkhan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 16:35:57 by khkhan            #+#    #+#             */
/*   Updated: 2024/08/22 14:49:44 by khkhan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	char	negative;
	char	positive;

	negative = 'N';
	positive = 'P';
	if (n < 0)
	{
		write(1, &negative, 1);
	}
	if (n >= 0)
	{
		write(1, &positive, 1);
	}
}

// int	main(void)
// {
// 	int	a;

// 	a = -5;
// 	ft_is_negative(a);
// 	return (0);
// }
