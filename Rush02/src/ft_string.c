/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_string.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nabderra <nabderra@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 21:24:13 by nabderra          #+#    #+#             */
/*   Updated: 2023/08/27 04:44:52 by nabderra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (*str)
	{
		++len;
		++str;
	}
	return (len);
}

char	*ft_strdup_skip_ret(char *str)
{
	char	*dup;
	char	*ret;
	int		idx;

	dup = malloc(sizeof(char) * (ft_strlen(str) + 1));
	if (!dup)
		return (dup);
	ret = dup;
	idx = 0;
	while (str[idx])
	{
		dup[idx] = str[idx];
		++idx;
	}
	while (dup[idx] == '\0' || dup[idx] == '\n' || dup[idx] == ' ')
	{
		dup[idx] = '\0';
		--idx;
	}
	if (idx <= 0)
		free(ret);
	return (ret);
}
