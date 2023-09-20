/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anamadri <anamadri@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/16 12:43:00 by anamadri          #+#    #+#             */
/*   Updated: 2023/08/17 10:45:36 by anamadri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	first_array_value;
	int	second_array_value;
	int	store_value;

	first_array_value = 0;
	while (first_array_value < size)
	{
		second_array_value = first_array_value + 1;
		while (second_array_value < size)
		{
			if (tab[first_array_value] > tab[second_array_value])
			{
				store_value = tab[first_array_value];
				tab[first_array_value] = tab[second_array_value];
				tab[second_array_value] = store_value;
			}
		second_array_value++;
		}
	first_array_value++;
	}
}
