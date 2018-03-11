/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tlutsyk <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/25 16:47:57 by tlutsyk           #+#    #+#             */
/*   Updated: 2017/10/25 17:00:49 by tlutsyk          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

#define BUF_SIZE 32

void	ft_putchar(char a)
{
	write(1, &a, 1);
}

void	ft_putstr(char *b)
{
	int in;

	in = 0;
	while (b[in] != '\0')
	{
		ft_putchar(b[in]);
		in++;
	}
}

void	ft_putstrerr(char *b)
{
	int in;

	in = 0;
	while (b[in] != '\0')
	{
		write(2, &b[in], 1);
		in++;
	}
}

int		ft_search_error(int argc)
{
	if (argc < 2)
	{
		ft_putstrerr("File name missing.\n");
		return (0);
	}
	if (argc > 2)
	{
		ft_putstrerr("Too many arguments.\n");
		return (0);
	}
	return (1);
}

int		main(int argc, char **argv)
{
	int		fd;
	int		ret;
	char	buf[BUF_SIZE + 1];

	if (!ft_search_error(argc))
		return (0);
	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
		return (0);
	while ((ret = read(fd, buf, BUF_SIZE)))
	{
		buf[ret] = '\0';
		ft_putstr(buf);
	}
	if (close(fd) == -1)
		return (0);
	return (0);
}
