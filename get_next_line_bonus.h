/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: falakus <falakus@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/14 12:00:56 by falakus           #+#    #+#             */
/*   Updated: 2024/12/14 12:00:57 by falakus          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 10
# endif

# include <fcntl.h>
# include <stdlib.h>
# include <unistd.h>

int		found_new_line(char *buffer);
size_t	ft_strlen(char *str);
char	*ft_strjoin(char *s1, char *s2);
char	*get_new_line(char *buffer);
char	*get_new_buffer(char *buffer);
char	*get_next_line(int fd);

#endif