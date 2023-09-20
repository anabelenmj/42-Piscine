/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nabderra <nabderra@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 02:30:29 by nabderra          #+#    #+#             */
/*   Updated: 2023/08/27 04:26:16 by nabderra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_string.h"

void	ft_print(char *str)
{
	write(1, str, ft_strlen(str));
}

void	ft_print_hundreds(long num, char **numbers)
{
	if (num >= 100)
	{
		ft_print(numbers[(num / 100) % 10]);
		ft_print(" ");
		ft_print(numbers[28]);
		if (num % 100 > 10 || num % 10 > 0)
			ft_print(" ");
	}
	if (num % 100 > 20)
	{
		ft_print(numbers[(num / 10) % 10 + 18]);
		if (num % 10 > 0)
		{
			ft_print("-");
			ft_print(numbers[num % 10]);
		}
	}
	else if (num % 100 > 0)
	{
		ft_print(numbers[num % 100]);
	}
}

void	print_triplet(long val, char **numbers, int dot)
{
	if (val > 0)
	{
		ft_print_hundreds(val, numbers);
		ft_print(" ");
		ft_print(numbers[dot]);
		ft_print(" ");
	}
}
