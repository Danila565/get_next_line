/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efelicit <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 15:21:08 by efelicit          #+#    #+#             */
/*   Updated: 2022/01/03 15:33:44 by efelicit         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef GET_NEXT_LINE_BONUS_H
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
