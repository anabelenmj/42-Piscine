/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anamadri <anamadri@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/25 10:29:01 by anamadri          #+#    #+#             */
/*   Updated: 2023/08/25 10:30:09 by anamadri         ###   ########.fr       */
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
