/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlutsyk <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/24 20:52:23 by tlutsyk           #+#    #+#             */
/*   Updated: 2017/10/25 11:01:52 by tlutsyk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int *res;
	int index;
	int tmp;

	if (min >= max)
		return (0);
	index = 0;
	tmp = max - min;
	res = malloc(sizeof(*res) * (max - min));
	if (res == 0)
		return (0);
	while (index < tmp)
	{
		res[index] = min;
		min++;
		index++;
	}
	return (res);
}
