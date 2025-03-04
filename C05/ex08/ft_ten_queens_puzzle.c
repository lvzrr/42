/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaicastr <jaicastr@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/01 15:39:13 by jaicastr          #+#    #+#             */
/*   Updated: 2025/03/01 16:16:37 by jaicastr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#define N 10

int	g_board[N];

void	ft_print(int g_board[])
{
	int		c;
	char	out;

	c = 0;
	while (c < N)
	{
		out = '0' + g_board[c];
		write(1, &out, 1);
		c++;
	}
	write(1, "\n", 1);
}

int	ft_is_safe(int g_board[], int col, int row)
{
	int	i;
	int	diff_col;
	int	diff_row;

	i = 0;
	while (i < row)
	{
		diff_col = (g_board[i] - col);
		if (diff_col < 0)
			diff_col *= -1;
		diff_row = row - i;
		if (g_board[i] == col || diff_col == diff_row)
			return (0);
		i++;
	}
	return (1);
}

void	solve(int row, int *solc)
{
	int	col;

	if (row == N)
	{
		ft_print(g_board);
		(*solc)++;
		return ;
	}
	col = 0;
	while (col < N)
	{
		if (ft_is_safe(g_board, col, row))
		{
			g_board[row] = col;
			solve(row + 1, solc);
		}
		col++;
	}
}

int	ft_ten_queens_puzzle(void)
{
	int	solc;

	solc = 0;
	solve(0, &solc);
	return (solc);
}
