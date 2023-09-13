/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stakan <stakan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 15:03:44 by stakan            #+#    #+#             */
/*   Updated: 2022/10/22 18:31:29 by stakan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*first;

	first = malloc(sizeof(*first));
	if (!first)
		return (NULL);
	first->content = content;
	first->next = NULL;
	return (first);
}

/*
#include <stdio.h>
int	main()
{
	int		tab[20] = 5;
	t_list	*begin;
	*tab = 0;
	begin = ft_lstnew(tab);
	printf("Test :\n");
	if (begin && !begin->next && begin->content && *((int*)begin->content) == 0)
		printf("OK\n");
	else
		printf("Fail\n");
}
*/
