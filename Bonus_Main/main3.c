/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: groberto <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/29 11:28:31 by groberto          #+#    #+#             */
/*   Updated: 2018/12/06 14:46:15 by groberto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <stdio.h>

int		main(int argc, char **argv)
{
	char	*str;
	int		fd;

	if (argc || argv)
		;	
	fd = open(argv[1], O_RDONLY);
	while (get_next_line(fd, &str) == 1)
	{
		printf(" %s\n", str);
		free(str);
	}
	close(fd);
	return (0);
}
