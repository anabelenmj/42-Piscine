/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anamadri <anamadri@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/12 18:13:22 by anamadri          #+#    #+#             */
/*   Updated: 2023/08/13 17:17:03 by anamadri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void)
{
	char	letter_a;

	letter_a = 'a';
	while (letter_a <= 'z')
	{
		write(1, &letter_a, 1);
		letter_a++;
	}
}
