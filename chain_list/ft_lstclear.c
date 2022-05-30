/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdutschk <jdutschk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 18:57:18 by jdutschk          #+#    #+#             */
/*   Updated: 2022/05/30 12:40:45 by jdutschk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*tmp;

	if (lst && *del)
	{
		while (*lst)
		{
			tmp = *lst;
			ft_lstdelone(*lst, *del);
			*lst = tmp->next;
		}
	}
}
