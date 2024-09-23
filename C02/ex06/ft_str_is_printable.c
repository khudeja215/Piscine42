/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khkhan <khkhan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/25 01:39:41 by khudeja           #+#    #+#             */
/*   Updated: 2024/08/25 12:24:22 by khkhan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	while (*str != '\0')
	{
		if (!(*str >= 32 && *str <= 126))
		{
			return (0);
		}
		str++;
	}
	return (1);
}

// int	main(void)
// {
// 	char	*msg;
// 	int		ans;
// 	char	answ;

// 	msg = "";
// 	ans = ft_str_is_printable(msg);
// 	answ = ans + '0';
// 	write(1, &answ, 1);
// }
