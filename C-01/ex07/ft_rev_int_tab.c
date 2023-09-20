/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anamadri <anamadri@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/15 20:53:07 by anamadri          #+#    #+#             */
/*   Updated: 2023/08/16 18:20:05 by anamadri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	start;
	int	end;
	int	start_value;

	start = 0;
	end = size - 1;
	while (start < end)
	{	
		start_value = tab[start];
		tab[start] = tab[end];
		tab[end] = start_value;
		start++;
		end--;
	}
}
