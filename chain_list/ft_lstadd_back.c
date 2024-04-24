/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdutschk <jdutschk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 18:17:11 by jdutschk          #+#    #+#             */
/*   Updated: 2022/05/26 14:41:24 by jdutschk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	ft_lstadd_back(t_list **lst, t_list *toAdd)
{
	if (lst && toAdd)
	{
		if (*lst)
			(ft_lstlast(*lst))->next = toAdd;
		else
			*lst = toAdd;
	}
}
