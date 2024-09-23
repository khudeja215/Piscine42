/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khkhan <khkhan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 12:31:16 by khkhan            #+#    #+#             */
/*   Updated: 2024/08/29 11:45:55 by khkhan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	put_ch(int nb)

{
	char	c;

	c = nb + '0';
	write(1, &c, 1);
}

void	specialcases(int nb)
{
	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
	}
	if (nb == 0)
	{
		put_ch(0);
	}
}

void	ft_putnbr(int nb)

{
	int	i;
	int	digits[10];

	i = 0;
	specialcases(nb);
	if (nb == 0 || nb == -2147483648)
		return ;
	if (nb < 0)
	{
		write(1, "-", 1);
		nb = -nb;
	}
	while (nb > 0)
	{
		digits[i] = nb % 10;
		nb /= 10;
		i++;
	}
	while (i > 0)
	{
		i--;
		put_ch(digits[i]);
	}
}

// int	main(void)

// {
// 	int	i;

// 	i = -214748364;
// 	ft_putnbr(i);
// 	return (0);
// }
