/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efelicit <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 16:27:26 by efelicit          #+#    #+#             */
/*   Updated: 2022/01/03 15:33:12 by efelicit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "get_next_line.h"

static void	ft_append(int d, char *str[MAX_FD], int fd, char *buf)
{
	char	*tmp;

	if (d < BUFFSIZE)
		buf[d] = '\0';
	tmp = str[fd];
	str[fd] = ft_strjoin(str[fd], buf);
	free(tmp);
}

static	size_t	ft_read(char *str[MAX_FD], int fd)
{
	char	*buf;
	int		d;

	d = 1;
	if (!str[fd])
		str[fd] = ft_strjoin("", "");
	buf = (char *) malloc(sizeof(char) * BUFFSIZE);
	if (!buf)
		return (1);
	while (d > 0)
	{
		d = read(fd, buf, BUFFSIZE);
		if (d > 0)
			ft_append(d, str, fd, buf);
		if (ft_strchr(buf, '\n') || d < BUFFSIZE)
			break ;
	}
	free(buf);
	return (0);
}

char	*get_next_line(int fd)
{
	static char	*str[MAX_FD];
	char		*line;
	size_t		len;
	char		*tmp;

	if (fd < 0 || ft_read(str, fd))
		return (NULL);
	line = ft_strchr(str[fd], '\n');
	if (!line)
	{
		len = ft_strlen(str[fd]);
		if (len == 0)
		{
			free(str[fd]);
			str[fd] = NULL;
			return (NULL);
		}
	}
	else
		len = line - str[fd];
	line = ft_substr(str[fd], 0, len + 1);
	tmp = ft_substr(str[fd], len + 1, ft_strlen(str[fd] + len + 1));
	free(str[fd]);
	str[fd] = tmp;
	return (line);
}
