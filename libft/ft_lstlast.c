/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stakan <stakan@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 16:58:13 by stakan            #+#    #+#             */
/*   Updated: 2022/10/22 18:31:25 by stakan           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next != NULL)
		lst = lst->next;
	return (lst);
}
/*
#include <stdio.h>

int	main()
{
	int		tab[20];
	t_list	*begin;
	*tab = 0;
	begin = ft_lstnew(tab);

	printf("Test :\n");
	if (*((int*)(ft_lstlast(begin)->content)) == 0) // son eleman sıfır ise
		printf("OK\n");
	else
		printf("Fail\n");
}
*/