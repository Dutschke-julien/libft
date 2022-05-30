/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdutschk <jdutschk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 13:22:24 by jdutschk          #+#    #+#             */
/*   Updated: 2022/04/26 18:43:40 by jdutschk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	size_t	total;
	void	*new;

	total = count * size;
	new = malloc(total);
	if (!new)
		return (NULL);
	ft_bzero(new, total);
	return (new);
}
