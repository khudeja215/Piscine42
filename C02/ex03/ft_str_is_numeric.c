/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khkhan <khkhan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/25 01:25:04 by khudeja           #+#    #+#             */
/*   Updated: 2024/08/25 12:12:50 by khkhan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	while (*str != '\0')
	{
		if (!((*str >= '0' && *str <= '9')))
		{
			return (0);
		}
		str++;
	}
	return (1);
}

// int main(void)
// {
//     char *msg = "12!3";
//     int ans = ft_str_is_numeric(msg);
//     char answ = ans + '0';
//     write(1, &answ, 1);
// }