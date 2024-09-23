/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khkhan <khkhan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/25 01:34:19 by khudeja           #+#    #+#             */
/*   Updated: 2024/08/25 12:21:19 by khkhan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	while (*str != '\0')
	{
		if (!(*str >= 'A' && *str <= 'Z'))
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

// 	msg = "abc123&";
// 	ans = ft_str_is_uppercase(msg);
// 	answ = ans + '0';
// 	write(1, &answ, 1);
// }
