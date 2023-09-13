/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stakan <stakan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 13:38:16 by stakan            #+#    #+#             */
/*   Updated: 2022/10/16 14:53:43 by stakan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>
#include <fcntl.h>

void	ft_putchar_fd(char c, int fd)
{
	if (!fd)
		return ;
	write(fd, &c, 1);
}
/*
int	main(void)
{
    creat("test.txt", O_CREAT | S_IRWXU);
	int	fd = open ("test.txt", O_WRONLY);
	ft_putchar_fd('c',fd);
}
*/
