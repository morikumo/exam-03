/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mabid <mabid@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/04 16:56:42 by asabani           #+#    #+#             */
/*   Updated: 2022/04/12 16:02:43 by mabid            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE
#define GET_NEXT_LINE
#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include <fcntl.h>

char *get_next_line(int fd);
char *ft_strdup(char *str);

#endif
