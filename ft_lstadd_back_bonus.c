/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenlahb <abenlahb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 23:08:10 by abenlahb          #+#    #+#             */
/*   Updated: 2022/11/04 14:55:06 by abenlahb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*a;

	if (lst && new)
	{
		if (*lst)
		{
			a = ft_lstlast(*lst);
			a -> next = new;
		}
		else
			*lst = new;
	}
}
