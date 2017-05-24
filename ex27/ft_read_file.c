/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_read_file.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knzeng-e <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/22 17:37:26 by knzeng-e          #+#    #+#             */
/*   Updated: 2017/05/22 17:46:48 by knzeng-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_display_file.h"

int	ft_read_file(char *file_to_read)
{
	int fd;
	int	nb_lus;
	int	tab[BUFF_SIZE + 1];

	fd = open(file_to_read, O_RDONLY);
	if (fd == -1)
		return (OPEN_ERROR);
	while ((nb_lus = read(fd, tab, BUFF_SIZE)))
	{
		tab[nb_lus] = '\0';
		write(1, tab, nb_lus);
	}
	if ((close(fd) == -1))
		return (CLOSE_ERROR);
	return (READ_OK);
}
