/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anamadri <anamadri@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/18 10:19:10 by anamadri          #+#    #+#             */
/*   Updated: 2023/08/23 10:09:08 by anamadri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	char			*temp;
	unsigned int	i;

	i = 0;
	temp = dest;
	if (dest == NULL || src == NULL)
		return (dest);
	while (*src != '\0' && i < n && n > 0)
	{
		*temp = *src;
		temp++;
		src++;
		i++;
	}
	while (i < n)
	{
		*temp = '\0';
		temp++;
		i++;
	}
	return (dest);
}
