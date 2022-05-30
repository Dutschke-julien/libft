/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdutschk <jdutschk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/10 14:00:07 by jdutschk          #+#    #+#             */
/*   Updated: 2022/04/26 18:44:19 by jdutschk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

static size_t	ft_get_nbr_word(char *s1, char c)
{
	size_t	i;
	size_t	nbr_word;

	nbr_word = 0;
	i = 0;
	if (!s1 || !(s1[i]))
		return (nbr_word);
	while (s1[i] && s1[i] == c)
		i++;
	while (s1[i])
	{
		if (s1[i] == c)
		{
			nbr_word++;
			while (s1[i] && s1[i] == c)
				i++;
		}
		else
			i++;
	}
	if (i - 1 >= 0 && s1[i - 1] != c)
	nbr_word ++;
	return (nbr_word);
}

static char	*ft_subword(const char *str, int start, int finish)
{
	char	*word;
	int		i;

	i = 0;
	word = malloc((finish - start + 1) * sizeof(char));
	while (start < finish)
		word[i++] = str[start++];
	word[i] = '\0';
	return (word);
}

char	**ft_split(char const *s, char c)
{
	char			**tab_str;
	size_t			i;
	int				index;
	size_t			j;

	j = 0;
	index = -1;
	i = -1;
	if (!s)
		return (NULL);
	tab_str = malloc(sizeof(char *) * (ft_get_nbr_word((char *)s, c) + 1));
	if (!tab_str)
		return (NULL);
	while (++i <= ft_strlen(s))
	{
		if (s[i] != c && index < 0)
			index = i;
		else if ((s[i] == c || i == ft_strlen(s)) && index >= 0)
		{
			tab_str[j++] = ft_subword(s, index, i);
			index = -1;
		}
	}
	tab_str[j] = 0;
	return (tab_str);
}
//27 ligne 