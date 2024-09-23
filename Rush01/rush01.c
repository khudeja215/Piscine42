/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: askassar <askassar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/01 12:04:59 by maaltami          #+#    #+#             */
/*   Updated: 2024/09/01 15:28:17 by askassar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

void	ft_putnbr(int nb);
void	ft_putstr(char *str);
void	ft_putchar(char c);

void	space(int grid[4][4]);
int		check(int ac, char **av);
int		ft_strlen(char *str);
int		ft_atoi(char *str);
int		check_case(int grid[4][4], int pos, int *entry);
int		check_row(int grid[4][4], int row, int *entry);
int		check_column(int grid[4][4], int col, int *entry);
int		check_duplicate(int grid[4][4], int pos, int num);
int		check(int ac, char **av);

int	solve(int grid[4][4], int *entry, int pos)
{
	int	size;

	if (pos == 16)
	{
		return (1);
	}
	size = 1;
	while (size <= 4)
	{
		if (!check_duplicate(grid, pos, size))
		{
			grid[pos / 4][pos % 4] = size;
			if (!check_case(grid, pos, entry) && solve(grid, entry, pos + 1))
				return (1);
			grid[pos / 4][pos % 4] = 0;
		}
		size++;
	}
	return (0);
}

int	*get_numbers(char *str)
{
	int	*grid;
	int	i;
	int	j;

	i = 0;
	grid = malloc(sizeof(int) * 16);
	j = 0;
	while (str[i])
	{
		if (str[i] >= '1' && str[i] <= '4')
		{
			grid[j++] = ft_atoi(&str[i]);
		}
		i++;
	}
	return (grid);
}

void	display(int grid[4][4])
{
	int	i;
	int	j;

	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			ft_putnbr(grid[i][j]);
			if (j < 3)
				ft_putchar(' ');
			j++;
		}
		ft_putchar('\n');
		i++;
	}
}

int	check(int ac, char **av)
{
	return (ac != 2 || ft_strlen(av[1]) != 31);
}

int	main(int ac, char **av)
{
	int	grid[4][4];
	int	*entry;

	space(grid);
	if (check(ac, av))
	{
		ft_putstr("Error\n");
		return (1);
	}
	entry = get_numbers(av[1]);
	if (solve(grid, entry, 0))
	{
		display(grid);
	}
	else
	{
		ft_putstr("Error\n");
	}
	free(entry);
	return (0);
}
