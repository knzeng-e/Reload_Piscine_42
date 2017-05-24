/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knzeng-e <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/22 17:36:20 by knzeng-e          #+#    #+#             */
/*   Updated: 2017/05/22 17:36:38 by knzeng-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_display_file.h"

int	main(int ac, char **av)
{
	if (ac < 2)
	{
		write(2, "File name missing.", 18);
		return (FILE_MISSING_ERROR);
	}
	if (ac > 2)
	{
		write(2, "Too many arguments.", 19);
		return (MANY_ARGS_ERROR);
	}
	if (ft_read_file(av[1]) > 0)
		return (READ_OK);
	return (0);
}
