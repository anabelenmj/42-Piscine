/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dict.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nabderra <nabderra@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 01:15:25 by nabderra          #+#    #+#             */
/*   Updated: 2023/08/27 05:00:59 by nabderra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include "ft_atoi.h"
#include "ft_config.h"
#include "ft_string.h"

void	dict_init(char **numbers)
{
	int	idx;

	idx = 0;
	while (idx < NUM_ENTRIES_DICT)
	{
		numbers[idx] = NULL;
		++idx;
	}
}

int	assign_line_to_dict(long num, char **lines, char *line)
{
	long	value;

	if (num <= 20)
		value = num;
	else if (num == 30 || num == 40 || num == 50 || num == 60 || num == 70
		|| num == 80 || num == 90 || num == 100)
		value = (num / 10) + 18;
	else if (num == 1000)
		value = THOUSAND;
	else if (num == 1000000)
		value = MILLION;
	else if (num == 1000000000)
		value = BILLION;
	else
	{
		free(line);
		return (0);
	}
	if (lines[value])
	{
		free(line);
		return (1);
	}
	lines[value] = line;
	return (0);
}

int	read_line(int fd, char *buffer)
{
	int	idx;
	int	num_bytes;

	idx = 0;
	num_bytes = read(fd, &buffer[idx], 1);
	while (num_bytes > 0 && buffer[idx] != '\n')
	{
		++idx;
		num_bytes += read(fd, &buffer[idx], 1);
	}
	buffer[num_bytes] = '\0';
	return (num_bytes);
}

int	parse_line(char *buffer, long *num, char **line)
{
	int		idx;

	idx = 0;
	while (buffer[idx] == ' ')
		++idx;
	if (!buffer[idx] || buffer[idx] == '\n')
		return (0);
	if (!(buffer[idx] >= '0' && buffer[idx] <= '9'))
		return (1);
	ft_atoi(buffer, num);
	while (buffer[idx] && buffer[idx] != ':')
		++idx;
	++idx;
	while (buffer[idx] && buffer[idx] == ' ')
		++idx;
	if (!buffer[idx] || buffer[idx] == '\n')
		return (1);
	*line = ft_strdup_skip_ret(&buffer[idx]);
	if (!*line)
		return (1);
	return (0);
}

int	ft_read_dictionary(int fd, char **numbers)
{
	long	num;
	char	*line;
	char	buffer[PAGE_SIZE];

	while (read_line(fd, buffer))
	{
		line = NULL;
		if (parse_line(buffer, &num, &line))
		{
			free(line);
			return (1);
		}
		if (!line)
			continue ;
		if (assign_line_to_dict(num, numbers, line))
			return (1);
	}
	return (0);
}
