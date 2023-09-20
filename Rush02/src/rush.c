/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nabderra <nabderra@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 22:03:57 by nabderra          #+#    #+#             */
/*   Updated: 2023/08/27 05:00:45 by nabderra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include "ft_atoi.h"
#include "ft_config.h"
#include "ft_dict.h"
#include "ft_error.h"
#include "ft_print.h"

void	free_dict(char **numbers)
{
	int	i;

	i = 0;
	while (i < NUM_ENTRIES_DICT)
	{
		free(numbers[i]);
		++i;
	}
}

int	read_arguments(int argc, char **argv, long *num)
{
	char	*str;

	if (argc == 2)
		str = argv[1];
	else if (argc == 3)
		str = argv[2];
	else
	{
		ft_print_error();
		return (1);
	}
	if (ft_atoi(str, num))
	{
		ft_print_error();
		return (1);
	}
	return (0);
}

int	read_dict(int argc, char **argv, char ***numbers)
{
	int	error;
	int	fd;

	dict_init(*numbers);
	if (argc == 2)
		fd = open(DEFAULT_DICT_PATH, O_RDONLY);
	else if (argc == 3)
		fd = open(argv[1], O_RDONLY);
	else
		return (1);
	if (fd < 0)
		error = 1;
	else
		error = ft_read_dictionary(fd, *numbers);
	close(fd);
	if (error)
	{
		ft_print_dict_error();
		free_dict(*numbers);
		return (1);
	}
	return (0);
}

void	print_number(long num, char **numbers)
{
	long	val;

	if (num == 0)
	{
		ft_print(numbers[0]);
		ft_print("\n");
		return ;
	}
	val = (num / 1000000000) % 1000;
	print_triplet(val, numbers, BILLION);
	val = (num / 1000000) % 1000;
	print_triplet(val, numbers, MILLION);
	val = (num / 1000) % 1000;
	print_triplet(val, numbers, THOUSAND);
	val = num % 1000;
	ft_print_hundreds(val, numbers);
	ft_print("\n");
}

int	dict_is_ok(char **numbers)
{
	int	idx;

	idx = 0;
	while (idx < NUM_ENTRIES_DICT)
	{
		if (!numbers[idx])
			return (1);
		++idx;
	}
	return (0);
}
