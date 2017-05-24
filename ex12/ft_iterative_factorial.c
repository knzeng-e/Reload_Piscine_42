/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knzeng-e <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/22 17:33:07 by knzeng-e          #+#    #+#             */
/*   Updated: 2017/05/22 17:33:16 by knzeng-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	result;

	result = 1;
	if ((nb == 0) || (nb == 1))
		return (1);
	if (nb >= 2)
	{
		while (nb > 1)
			result *= nb--;
		return (result);
	}
	return (0);
}
