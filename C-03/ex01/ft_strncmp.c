/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anamadri <anamadri@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/23 18:38:03 by anamadri          #+#    #+#             */
/*   Updated: 2023/08/26 13:15:19 by anamadri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((*s1 != '\0' && *s2 != '\0') && (n > 0 && i < n))
	{
		if (*s1 == *s2)
		{
			s1++;
			s2++;
			i++;
		}
		else
			return (*s1 - *s2);
	}
	if (*s1 != '\0' && n > 0 && i < n)
		return (*s1 - *s2);
	else if (*s2 != '\0' && n > 0 && i < n)
		return (*s1 - *s2);
	return (0);
}
