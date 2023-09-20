/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anamadri <anamadri@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 12:06:11 by anamadri          #+#    #+#             */
/*   Updated: 2023/08/24 16:54:40 by anamadri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	char	*temp_str;
	char	*temp_find;

	if (*to_find == '\0')
		return (str);
	while (*str)
	{
		temp_str = str;
		temp_find = to_find;
		while ((*temp_find && *temp_str) && (*temp_str == *temp_find))
		{
			temp_str++;
			temp_find++;
		}
		if (*temp_find == '\0')
		{
			return (str);
		}
		str++;
	}
	return (NULL);
}
