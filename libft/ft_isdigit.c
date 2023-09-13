/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stakan <stakan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 13:17:42 by stakan            #+#    #+#             */
/*   Updated: 2022/11/27 15:02:13 by stakan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	ft_isdigit(int c)
{
	return (c >= '0' && c <= '9');
}
/*
int	main(int argv, char **argc)
{
	if (ft_isdigit(*argc[1]))
	{
		printf("%s", "Doğru");
		return (0);
	}
	printf("%s", "Yanlış");
	return (0);
}*/
