/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdutschk <jdutschk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/04 14:10:02 by jdutschk          #+#    #+#             */
/*   Updated: 2022/04/26 18:44:44 by jdutschk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	i2;

	i = 0;
	while (dst[i] && i < dstsize)
		i++;
	i2 = i;
	if (dstsize > 0)
	{
		while (src[i - i2] != '\0' && i < dstsize - 1)
		{
			dst[i] = src[i - i2];
			i++;
		}
		if (i2 < dstsize)
			dst[i] = '\0';
	}
	return (ft_strlen(src) + i2);
}
