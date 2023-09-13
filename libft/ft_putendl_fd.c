/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stakan <stakan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 14:28:31 by stakan            #+#    #+#             */
/*   Updated: 2022/10/29 14:20:55 by stakan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	int	i;

	if (!fd || !s)
		return ;
	i = 0;
	while (s[i])
	{
		write(fd, &s[i], 1);
		i++;
	}
	write(fd, &"\n", 1);
}
/*
int	main(void)
{
    creat("test.txt", O_CREAT | S_IRWXU);
	int	fd = open ("test.txt", O_WRONLY | O_APPEND);
    char s[] = "selam";
	ft_putendl_fd(s,fd);
    ft_putendl_fd(s,fd);
}
*/