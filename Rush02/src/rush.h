/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nabderra <nabderra@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 22:03:57 by nabderra          #+#    #+#             */
/*   Updated: 2023/08/27 02:54:32 by nabderra         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RUSH_H
# define RUSH_H

void	free_dict(char **numbers);

int		read_arguments(int argc, char **argv, long *num);

int		read_dict(int argc, char **argv, char ***numbers);

void	print_number(long num, char **numbers);

int		dict_is_ok(char **numbers);

#endif
