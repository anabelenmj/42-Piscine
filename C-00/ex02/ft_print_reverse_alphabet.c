/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anamadri <anamadri@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/12 19:59:34 by anamadri          #+#    #+#             */
/*   Updated: 2023/08/13 17:17:24 by anamadri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char	letter_z;

	letter_z = 'z';
	while (letter_z >= 'a')
	{
		write(1, &letter_z, 1);
		letter_z--;
	}
}
