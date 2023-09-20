/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joadomin <joadomin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/12 11:34:14 by joadomin          #+#    #+#             */
/*   Updated: 2023/08/13 15:36:48 by joadomin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);
void	horizontal_up(int x, int y, int x_modified);
void	horizontal_down(int x_modified);
void	vertical(int x_modified, int y);
void	vertical_one_line(int x_modified, int y);

void	rush(int x, int y)
{
	int	x_modified;

	x_modified = x;
	x_modified = x_modified - 2;
	if (x <= 0 || y <= 0 || x > 80 || y > 80)
	{
		write (1, "Valores fuera de rango (1,1 -> 80,80)\n", 39);
	}
	else if (x == 1 && y > 1)
	{
		x_modified = 0;
		ft_putchar('/');
		ft_putchar('\n');
		vertical_one_line(x_modified, y);
	}
	else
	{
		horizontal_up (x, y, x_modified);
	}
}

void	horizontal_up(int x, int y, int x_modified)
{
	int	asterisk_counter;

	asterisk_counter = 0;
	if (x == 1 && y == 1)
	{
		ft_putchar('/');
		ft_putchar('\n');
	}
	else
	{
		ft_putchar('/');
		while (asterisk_counter < x_modified)
		{
			ft_putchar('*');
			asterisk_counter++;
		}	
		ft_putchar('\\');
		ft_putchar('\n');
		vertical(x_modified, y);
	}
}

void	vertical(int x_modified, int y)
{
	int	space_counter;
	int	line_counter;
	int	y_modified;

	space_counter = 0;
	line_counter = 0;
	y_modified = y;
	y_modified -= 2;
	while (line_counter < y_modified)
	{		
		ft_putchar('*');
		while (space_counter < x_modified)
		{
			ft_putchar(' ');
			space_counter++;
		}
		ft_putchar('*');
		ft_putchar('\n');
		line_counter++;
		space_counter = 0;
	}
	if (y > 1)
	{
		horizontal_down(x_modified);
	}
}

void	horizontal_down(int x_modified)
{
	int	asterisk_counter;

	asterisk_counter = 0;
	ft_putchar('\\');
	while (asterisk_counter < x_modified)
	{
		ft_putchar('*');
		asterisk_counter++;
	}
	ft_putchar('/');
	ft_putchar('\n');
}

void	vertical_one_line(int x_modified, int y)
{
	int	asterisk_counter;
	int	line_counter;
	int	y_modified;

	asterisk_counter = 0;
	line_counter = 0;
	y_modified = y;
	y_modified -= 2;
	while (line_counter < y_modified)
	{		
		ft_putchar('*');
		while (asterisk_counter < x_modified)
		{
			ft_putchar(' ');
			asterisk_counter++;
		}
		ft_putchar('\n');
		line_counter++;
		asterisk_counter = 0;
	}
	ft_putchar('\\');
	ft_putchar('\n');
}
