/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stakan <stakan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 13:17:09 by stakan            #+#    #+#             */
/*   Updated: 2022/11/27 15:00:14 by stakan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	return (c >= 0 && c < 128);
}
/*
int	main(int argv, char **argc)
{
	if (ft_isascii(*argc[1]))
	{
		printf("%s", "Doğru");
		return (0);
	}
	printf("%s", "Yanlış");
	return (0);
}*/
