/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stakan <stakan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 13:18:17 by stakan            #+#    #+#             */
/*   Updated: 2022/11/27 15:26:44 by stakan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	ft_isprint(int c)
{
	return (c >= 32 && c <= 126);
}

int	main(int argc, char **argv)
{
	(void)argc;
	if (ft_isprint(ft_atoi(argv[1])))
	{
		printf("%s", "Doğru");
		return (0);
	}
	printf("%s", "Yanlış");
	return (0);
}
