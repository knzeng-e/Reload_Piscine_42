/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: knzeng-e <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/22 17:35:37 by knzeng-e          #+#    #+#             */
/*   Updated: 2017/05/22 20:52:10 by knzeng-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_param(char *param)
{
	int	i;

	i = 0;
	while (param && param[i])
		ft_putchar(param[i++]);
}

int		main(int ac, char **av)
{
	if (ac > 1)
	{
		while (*(++av))
		{
			ft_print_param((*av));
			ft_putchar('\n');
		}
	}
	return (0);
}
