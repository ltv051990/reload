/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlutsyk <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/24 20:13:21 by tlutsyk           #+#    #+#             */
/*   Updated: 2017/10/24 20:13:24 by tlutsyk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		in;
	char	*tmp;

	in = 0;
	while (src[in] != '\0')
	{
		in++;
	}
	tmp = (char*)malloc(sizeof(*tmp) + (in));
	in = 0;
	while (src[in] != '\0')
	{
		tmp[in] = src[in];
		in++;
	}
	tmp[in] = '\0';
	return (tmp);
}
