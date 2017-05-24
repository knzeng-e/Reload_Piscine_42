/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knzeng-e <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/22 20:26:01 by knzeng-e          #+#    #+#             */
/*   Updated: 2017/05/22 20:47:22 by knzeng-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str && str[i])
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*copy;
	int		index;

	copy = (char *)malloc(sizeof(char) * ft_strlen(src) + 1);
	if (copy)
	{
		index = -1;
		while (src && src[++index])
			copy[index] = src[index];
		copy[index] = '\0';
	}
	return (copy);
}
