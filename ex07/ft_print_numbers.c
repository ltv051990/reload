/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlutsyk <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/23 21:05:22 by tlutsyk           #+#    #+#             */
/*   Updated: 2017/10/23 21:10:16 by tlutsyk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char a);

void	ft_print_numbers(void)
{
	char a;

	a = '0';
	while (a <= '9')
	{
		ft_putchar(a);
		a++;
	}
}
