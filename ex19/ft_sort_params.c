/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlutsyk <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/24 18:17:10 by tlutsyk           #+#    #+#             */
/*   Updated: 2017/10/24 18:17:14 by tlutsyk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char a);

int		ft_strcmp(char *str1, char *str2)
{
	while (*str1 || *str2)
	{
		if (*str1 != *str2)
			return (*str1 - *str2);
		str1++;
		str2++;
	}
	return (0);
}

void	ft_print_params(int ac, char **av)
{
	int		in;
	int		loop;

	in = 1;
	loop = 0;
	while (in < ac)
	{
		while (av[in][loop] != '\0')
		{
			ft_putchar(av[in][loop]);
			loop++;
		}
		loop = 0;
		in++;
		ft_putchar('\n');
	}
}

void	ft_sort_params(int ac, char **av)
{
	int		index;
	int		loop;
	char	*tmp;

	loop = 1;
	index = 1;
	while (index < ac)
	{
		while (loop < ac - 1)
		{
			if ((ft_strcmp(av[loop], av[loop + 1])) > 0)
			{
				tmp = av[loop];
				av[loop] = av[loop + 1];
				av[loop + 1] = tmp;
			}
			loop++;
		}
		loop = 1;
		index++;
	}
}

int		main(int argc, char **argv)
{
	ft_sort_params(argc, argv);
	ft_print_params(argc, argv);
	return (0);
}
