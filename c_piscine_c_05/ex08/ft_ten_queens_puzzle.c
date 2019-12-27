/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aroque <aroque@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/25 15:34:21 by aroque            #+#    #+#             */
/*   Updated: 2019/12/27 17:29:54 by aroque           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

/*
 * Print the board according to a row index and giving
 * the column placement as its value.
 */
void    print_board(int *placements, int dim)
{
    int i;

    i = 0;
    while (i < dim)
    {
        ft_putchar(placements[i] + '0');
        i++;
    }
    ft_putchar('\n');
}

/*
 * Check if a queen can be put on desired location. The first if clause checks
 * if a queen is attacking in the same column, the second checks if another queen
 * is attacking from a '/' diagonal, while the last one checks a '\' diagonal attack
 */
int     is_safe(int row, int col, int *placements)
{
    int i;

    i = 0;
    while (i < row)
    {
        if (placements[i] == col)
        {
            return (0);
        }
        else if ((row - i) == (placements[i] - col))
        {
            return (0);
        }
        else if ((row - i) == (col - placements[i]))
        {
            return (0);
        }
        i++;
    }
    return (1);
}

/*
 * Backtracking utility to solve the puzzle. The choice was made based if a queen can be put on
 * the last board row, which increments the counter 'k'. Therefore, 'k' returns the number of
 * solutions found. if just one solution is required, the recursion have to be executed inside
 * a conditional return some desired value (usually zero).
 */
int     solve_queens(int row, int col, int placements[10], int dim)
{
    int k;

    if (row >= dim)
    {
        print_board(placements, dim);
        return (1);
    }
    else
    {
        k = 0;
        while (col < dim)
        {
            if (is_safe(row, col, placements))
            {
                placements[row] = col;
                k += solve_queens(row + 1, 0, placements, dim);
            }
            col++;
        }
    }
    return (k);
}

/*
 * Helper function to solve the problem. The solution array
 * may be modified upon new solutinons are found.
 */
int     ft_ten_queens_puzzle(void)
{
    int dim;
    int solution[10];

    dim = 10;
    return (solve_queens(0, 0, solution, dim));
}
