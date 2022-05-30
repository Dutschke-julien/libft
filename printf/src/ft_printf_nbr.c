/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_nbr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdutschk <jdutschk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 18:48:39 by jdutschk          #+#    #+#             */
/*   Updated: 2022/04/27 18:17:03 by jdutschk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../libft.h"

void	ft_putstr(char const *s, int fd)
{
	int		i;

	i = 0;
	if (s)
		while (s[i])
			write(fd, &s[i++], 1);
}

int	ft_putnbr_printf(int n)
{
	int	result;

	result = 0;
	if (n == -2147483648)
	{
		ft_putstr("-2147483648", 1);
		return (11);
	}
	else
	{
		if (n < 0)
		{
			ft_putchar('-', 1);
			n = n * -1;
			result++;
		}
		if (n > 9)
		{
			result += ft_putnbr_printf(n / 10);
		}
		ft_putchar((n % 10) + '0', 1);
		result++;
	}
	return (result);
}

int	ft_putnbr_1printf(unsigned int n)
{
	int	result;

	result = 0;
	if (n > 9)
	{
			result += ft_putnbr_1printf(n / 10);
	}
	ft_putchar((n % 10) + '0', 1);
		result++;
	return (result);
}

int	ft_putnbr1_printf(unsigned int n)
{
	int	result;

	result = 0;
	if (n < 0)
	{
		ft_putchar('-', 1);
		n = n * -1;
		result++;
	}
	if (n > 9)
	{
		result += ft_putnbr_1printf(n / 10);
	}
	ft_putchar((n % 10) + '0', 1);
		result++;
	return (result);
}
