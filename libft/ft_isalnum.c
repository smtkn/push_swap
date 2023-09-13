/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stakan <stakan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 13:08:34 by stakan            #+#    #+#             */
/*   Updated: 2022/11/27 14:59:06 by stakan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int
	ft_isalnum(int c)
{
	return (ft_isdigit(c) || ft_isalpha(c));
}
/*
int	main(int argv, char **argc)
{
	if (ft_isalnum(*argc[1]))
	{
		printf("%s", "Doğru");
		return (0);
	}
	printf("%s", "Yanlış");
	return (0);
}*/
