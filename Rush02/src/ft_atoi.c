/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nabderra <nabderra@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 02:32:16 by nabderra          #+#    #+#             */
/*   Updated: 2023/08/27 04:59:56 by nabderra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_space(char c)
{
	if (c == '\t' || c == '\n' || c == '\v' || c == '\f' || c == '\r'
		|| c == ' ')
		return (1);
	else
		return (0);
}

char	*consume_spaces(char *str)
{
	while (is_space(*str))
	{
		++str;
	}
	return (str);
}

char	*consume_signs(char *str, long *sign)
{
	*sign = 1;
	if (*str == '-')
	{
		*sign = -1;
		++str;
	}
	else if (*str == '+')
		++str;
	return (str);
}

long	read_number(char *str, int *error)
{
	long	num;

	*error = 1;
	num = 0;
	while (*str >= '0' && *str <= '9')
	{
		*error = 0;
		num *= 10;
		num += *str - '0';
		++str;
	}
	if (*str)
		*error = 1;
	return (num);
}

int	ft_atoi(char *str, long *ret)
{
	long	sign;
	long	num;
	int		error;

	str = consume_spaces(str);
	str = consume_signs(str, &sign);
	num = read_number(str, &error);
	*ret = sign * num;
	return (error);
}
