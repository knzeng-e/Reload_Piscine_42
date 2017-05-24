/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knzeng-e <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/22 17:34:02 by knzeng-e          #+#    #+#             */
/*   Updated: 2017/05/23 19:30:30 by knzeng-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	res;

	if (nb <= 3)
		return (0);
	res = 2;
	while ((res != (nb/2)) && (res * res) != nb)
		res++;
	return ((res >= (nb/2)) ? 0 : res);
}
