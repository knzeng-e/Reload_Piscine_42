#include <stdio.h>


void	ft_putchar(char c);

void	ft_swapstr(char **vector, int index1, int index2)
{
	char	*temp;

	temp = vector[index1];
	vector[index1] = vector[index2];
	vector[index2] = temp;
}

int	ft_strcmp(char *s1, char *s2)
{
	char	*str1;
	char	*str2;

	if (!s1 && s2)
		return (-1);
	if (s1 && !s2)
		return (1);
	str1 = s1;
	str2 = s2;
	while (*str1 && *str2)
	{
		if (*str1 != *str2)
			return (*str1 - *str2);
		str1++;
		str2++;
	}
	return (*str1 - *str2);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str && str[i])
		ft_putchar(str[i++]);
}

void	ft_print_params(char **av)
{
	char	**current_string;

	current_string = (++av);
	while (*current_string)
	{
		ft_putstr((*current_string));
		current_string++;
		ft_putstr("\n");
	}
}

int		main(int ac, char **av)
{
	int	j;
	int	i;

	if (ac == 2)
		ft_putstr(av[1]);
	if (ac > 2)
	{
		i = 1;
		while (i < (ac - 1))
		{
			j = i + 1;
			while (j < ac)
			{
				if ((ft_strcmp(av[i], av[j])) > 0)
					ft_swapstr(av, i, j);
				j++;
			}
			i++;
		}
		ft_print_params(av);
	}
	return (0);
}
