/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knzeng-e <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/22 20:01:23 by knzeng-e          #+#    #+#             */
/*   Updated: 2017/05/22 20:15:28 by knzeng-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*tab;
	int	begin;
	int	index;

	if (min >= max)
		return (NULL);
	if ((tab = (int *)malloc(sizeof(int) * (max - min))))
	{
		index = 0;
		begin = min;
		while (begin < max)
			tab[index++] = begin++;
	}
	return (tab);
}
