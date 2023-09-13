/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stakan <stakan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 11:19:29 by stakan            #+#    #+#             */
/*   Updated: 2022/10/23 13:02:56 by stakan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	checker(char c, char const *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (set[i++] == c)
			return (1);
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	int		i;
	int		s1_len;
	int		k;

	i = 0;
	k = 0;
	if (s1 == 0 || set == 0)
		return (NULL);
	s1_len = ft_strlen(s1);
	while (s1[i] && checker(s1[i], set))
		i++;
	while (s1_len > i && checker(s1[s1_len - 1], set))
		s1_len--;
	str = (char *)malloc(sizeof(char) * (s1_len - i + 1));
	if (!str)
		return (NULL);
	while (i < s1_len)
		str[k++] = s1[i++];
	str[k] = '\0';
	return (str);
}
