/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stakan <stakan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 13:58:35 by stakan            #+#    #+#             */
/*   Updated: 2022/10/16 14:53:53 by stakan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t n)
{
	size_t	i;
	size_t	len_s;
	size_t	len_d;

	len_s = ft_strlen(src);
	len_d = ft_strlen(dest);
	if (n < 1)
		return (len_s);
	if (n < len_d)
		return (len_s + n);
	i = 0;
	while (src[i] != '\0' && i + len_d < n - 1)
	{
		dest[i + len_d] = src[i];
		i++;
	}
	dest[i + len_d] = '\0';
	return (len_d + len_s);
}
