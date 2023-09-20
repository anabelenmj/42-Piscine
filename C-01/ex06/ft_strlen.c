/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anamadri <anamadri@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 17:39:13 by anamadri          #+#    #+#             */
/*   Updated: 2023/08/17 10:20:20 by anamadri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	num_counter;

	num_counter = 0;
	while (*str != '\0')
	{
		num_counter++;
		str++;
	}
	return (num_counter);
}
