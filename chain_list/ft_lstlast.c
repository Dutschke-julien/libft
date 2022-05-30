/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdutschk <jdutschk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/25 17:50:58 by jdutschk          #+#    #+#             */
/*   Updated: 2022/05/30 12:24:25 by jdutschk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	int	compteur;

	compteur = ft_lstsize(lst);
	while (compteur-- && compteur)
		lst = lst->next;
	return (lst);
}
