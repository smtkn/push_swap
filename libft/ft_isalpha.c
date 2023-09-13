/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stakan <stakan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 13:12:04 by stakan            #+#    #+#             */
/*   Updated: 2022/11/27 15:49:23 by stakan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	ft_isalpha(int c)
{
	return ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'));
}
/*
int	main(int argv, char **argc)
{
	if (ft_isalpha(*argc[1]))
	{
		printf("%s", "Doğru");
		return (0);
	}
	printf("%s", "Yanlış");
	return (0);
}*/
