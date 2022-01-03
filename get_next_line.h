/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efelicit <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 15:19:57 by efelicit          #+#    #+#             */
/*   Updated: 2022/01/03 15:33:32 by efelicit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef GET_NEXT_LINE_H
# include <unistd.h>
# include <stdlib.h>
# ifndef BUFFSIZE
#  define BUFFSIZE 1
# endif
# define MAX_FD 10240

char			*get_next_line(int fd);
size_t			ft_strlen(const char *c);
char			*ft_strjoin(char const *s1, char const *s2);
char			*ft_strchr(const char *s, int a);
char			*ft_substr(char const *s, unsigned int start, size_t len);
int				ft_strlcpy(char *dest, char *src, size_t n);
#endif
