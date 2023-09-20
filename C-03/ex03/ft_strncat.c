/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anamadri <anamadri@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 09:41:16 by anamadri          #+#    #+#             */
/*   Updated: 2023/08/28 10:30:07 by anamadri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include <string.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	char			*temp;

	temp = dest;
	while (*temp)
		temp++;
	while (*src && nb > 0)
	{
		*temp = *src;
		src++;
		temp++;
		nb--;
	}
	*temp = '\0';
	return (dest);
}
/*int main()
{
	char dest[20] = "Hello";
	char src[20] = "Que tal";
	ft_strncat(dest, src, 3);
	strncat(dest, src, 3);

	printf("%s\n", dest);
	printf("%s", dest);
	return (0);
}*/
