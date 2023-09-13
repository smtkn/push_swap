/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stakan <stakan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 18:09:59 by stakan            #+#    #+#             */
/*   Updated: 2022/10/22 18:31:58 by stakan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*temp;

	if (!*lst)
		return ;
	while (*lst)
	{
		temp = (*lst)->next;
		del((*lst)->content);
		free(*lst);
		*lst = temp;
	}
}
/*
#include <stdio.h>

void	ft_del2(void *content)
{
	*(int*)content = 0;
	return ;
}


int	main()
{
	int		tab[20];
	int	i;
	t_list	*begin;
	*tab = 0;
	begin = ft_lstnew(tab);

	printf("\nTest :\n");
	i = 0;
	while (++i < 10)
	{
		tab[i] = i;
		ft_lstadd_front(&begin, ft_lstnew(tab + i));
	}
	t_list	*tmp = begin;
	printf("9 > 0.\n");
	while (tmp)
	{
		printf("%i ", *((int*)tmp->content));
		tmp = tmp->next;
	}
	
	printf("\n\nTest 2. Asama :\n");
	ft_lstclear(&begin, &ft_del2);
	printf("Bir sey yok\n");
	tmp = begin;
	while (tmp)
	{
		printf("%i ", *((int*)tmp->content));
		tmp = tmp->next;
	}

	printf("\n");
}
*/