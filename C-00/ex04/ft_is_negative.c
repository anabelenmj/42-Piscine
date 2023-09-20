/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anamadri <anamadri@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/12 20:26:42 by anamadri          #+#    #+#             */
/*   Updated: 2023/08/13 17:18:06 by anamadri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	char	letter_p;
	char	letter_n;

	letter_p = 'P';
	letter_n = 'N';
	if (n < 0)
	{
		write(1, &letter_n, 1);
	}
	else
	{
		write(1, &letter_p, 1);
	}
}
