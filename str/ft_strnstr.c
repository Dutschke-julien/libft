/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdutschk <jdutschk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/01 18:21:03 by jdutschk          #+#    #+#             */
/*   Updated: 2022/04/26 18:45:37 by jdutschk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	l;

	if (!*needle)
		return ((char *)haystack);
	while (*haystack && len-- > 0)
	{
		if (*haystack == *needle)
		{
			l = len;
			i = 1;
			while (needle[i] && haystack[i] == needle[i] && l-- > 0)
				i++;
			if (!needle[i])
				return ((char *)haystack);
		}
		haystack++;
	}
	return (0);
}
