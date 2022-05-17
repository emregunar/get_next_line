/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egunar <egunar@student.42istanbul.com.tr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/09 13:44:38 by egunar            #+#    #+#             */
/*   Updated: 2022/01/10 15:59:21 by egunar           ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <unistd.h>
# include <stdlib.h>

char		*oku_ve_al(int fd, char *full_str);

char		*get_next_line(int fd);

int			ft_strlen(char *str);

char		*ft_strchr(char *str, char c);

char		*ft_strjoin(char *s1, char *s2);

char		*just_line(char *full_str);

char		*destroy_before_nl(char *full_str);
#endif
