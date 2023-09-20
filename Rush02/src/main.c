/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nabderra <nabderra@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 22:03:57 by nabderra          #+#    #+#             */
/*   Updated: 2023/08/27 04:49:26 by nabderra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "rush.h"
#include "ft_config.h"
#include "ft_error.h"
#include "ft_print.h"

int	check_and_print_number(char **numbers, long num)
{
	int	status;

	status = dict_is_ok(numbers);
	if (status)
		ft_print_dict_error();
	else
		print_number(num, numbers);
	return (status);
}

void	free_all(char **numbers)
{
	free_dict(numbers);
	free(numbers);
}

int	main(int argc, char **argv)
{
	char	**numbers;
	long	num;
	int		status;

	numbers = (char **)malloc(sizeof(char *) * NUM_ENTRIES_DICT);
	if (!numbers)
	{
		ft_print("Error: malloc could not allocate memory\n");
		return (1);
	}
	if (read_arguments(argc, argv, &num) || read_dict(argc, argv, &numbers))
	{
		free(numbers);
		return (1);
	}
	if (num < 0 || num >= ONE_TRILLION)
	{
		free_all(numbers);
		ft_print_error();
		return (1);
	}
	status = check_and_print_number(numbers, num);
	free_all(numbers);
	return (status);
}
