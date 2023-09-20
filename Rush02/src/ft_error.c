/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_error.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nabderra <nabderra@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 22:06:04 by nabderra          #+#    #+#             */
/*   Updated: 2023/08/26 22:06:06 by nabderra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_error(void)
{
	write(1, "Error\n", 6);
}

void	ft_print_dict_error(void)
{
	write(1, "Dict Error\n", 11);
}
