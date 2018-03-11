/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlutsyk <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/24 17:22:10 by tlutsyk           #+#    #+#             */
/*   Updated: 2017/10/25 19:17:52 by tlutsyk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

int		main(int argc, char **argv)
{
	int l;
	int e;
	int b;

	l = 1;
	e = 0;
	b = argc;
	while (b > 1)
	{
		while (argv[l][e])
		{
			ft_putchar(argv[l][e]);
			e++;
		}
		ft_putchar('\n');
		l++;
		e = 0;
		b--;
	}
	return (0);
}
