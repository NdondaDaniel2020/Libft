/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_end_mem.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmatondo <nmatondo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 07:10:50 by nmatondo          #+#    #+#             */
/*   Updated: 2024/05/24 15:45:51 by nmatondo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_nblen_hex(unsigned long long nb)
{
	unsigned long long	i;

	i = 0;
	if (nb == 0)
		i++;
	while (nb)
	{
		nb = nb / 16;
		i++;
	}
	return (i);
}

static void	put_hex(unsigned long long nb, int tan)
{
	if (nb >= 16)
	{
		put_hex(nb / 16, tan);
		nb = nb % 16;
	}
	if (nb < 16)
	{
		if (nb < 10)
			ft_putchar_fd(nb + '0', 1);
		else if (nb >= 10 && tan == 0)
			ft_putchar_fd(nb + 87, 1);
		else if (nb >= 10 && tan == 1)
			ft_putchar_fd(nb + 55, 1);
	}
}

static int	ft_put_hex(unsigned long long nb, int tan, int count)
{
	put_hex(nb, tan);
	count += ft_nblen_hex(nb);
	return (count);
}

int	ft_put_end_mem(unsigned long long nb, int count)
{
	if (nb == 0)
	{
		ft_putstr("(nil)", 1);
		count += 5;
	}
	else
	{
		count = ft_putstr("0x", count);
		count = ft_put_hex(nb, 0, count);
	}
	return (count);
}
