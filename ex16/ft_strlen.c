/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlutsyk <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/24 17:02:23 by tlutsyk           #+#    #+#             */
/*   Updated: 2017/10/24 17:02:24 by tlutsyk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int in;

	in = 0;
	while (str[in] != '\0')
	{
		in++;
	}
	return (in++);
}
