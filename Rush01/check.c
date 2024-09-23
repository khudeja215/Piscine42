/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: khkhan <khkhan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 12:04:56 by maaltami          #+#    #+#             */
/*   Updated: 2024/09/01 14:40:13 by khkhan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putstr(char *str);
void	ft_putchar(char c);

int		check(int ac, char **av);
int		ft_strlen(char *str);
int		ft_atoi(char *str);
int		count_max_in_line(int values[4]);

int	check_duplicate(int tab[4][4], int pos, int num)
{
	int	i;

	i = 0;
	while (i < 4)
	{
		if (tab[pos / 4][i] == num || tab[i][pos % 4] == num)
			return (1);
		i++;
	}
	return (0);
}

int	check_column(int tab[4][4], int col, int *entry)
{
	int	i;
	int	values[4];
	int	count;

	i = 0;
	while (i < 4)
	{
		values[i] = tab[i][col];
		i++;
	}
	count = count_max_in_line(values);
	if (entry[col] != count)
		return (1);
	i = 0;
	while (i < 4)
	{
		values[i] = tab[3 - i][col];
		i++;
	}
	count = count_max_in_line(values);
	return (entry[4 + col] != count);
}

int	count_max_in_line(int values[4])
{
	int	i;
	int	max;
	int	count;

	i = 0;
	max = 0;
	count = 0;
	while (i < 4)
	{
		if (values[i] > max)
		{
			max = values[i];
			count++;
		}
		i++;
	}
	return (count);
}

int	check_row(int tab[4][4], int row, int *entry)
{
	int	i;
	int	values[4];
	int	count;

	i = 0;
	while (i < 4)
	{
		values[i] = tab[row][i];
		i++;
	}
	count = count_max_in_line(values);
	if (entry[8 + row] != count)
		return (1);
	i = 0;
	while (i < 4)
	{
		values[i] = tab[row][3 - i];
		i++;
	}
	count = count_max_in_line(values);
	return (entry[12 + row] != count);
}

int	check_case(int tab[4][4], int pos, int *entry)
{
	int	row;
	int	col;

	row = pos / 4;
	col = pos % 4;
	if (row == 3 && check_column(tab, col, entry))
		return (1);
	if (col == 3 && check_row(tab, row, entry))
		return (1);
	return (0);
}
