/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmatondo <nmatondo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 07:10:50 by nmatondo          #+#    #+#             */
/*   Updated: 2024/07/03 13:17:31 by nmatondo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	check_base(int base)
{
	if (base != 2 && base != 8 && base != 10 && base != 16)
		return (0);
	return (1);
}

static void	putnbr_base(long int nb, int base, int tan)
{
	if (check_base(base) == 0)
		return ;
	if (nb < 0)
	{
		ft_putchar_fd('-', 1);
		nb = -nb;
	}
	if (nb >= base)
	{
		putnbr_base(nb / base, base, tan);
		nb = nb % base;
	}
	if (nb < base)
	{
		if (nb < 10)
			ft_putchar_fd(nb + '0', 1);
		else if (nb >= 10 && tan == 0)
			ft_putchar_fd(nb + 87, 1);
		else if (nb >= 10 && tan == 1)
			ft_putchar_fd(nb + 55, 1);
	}
}

int	ft_putnbr_base(long int nb, int base, int tan, int count)
{
	if (base == 16 && nb < 0)
	{
		putnbr_base((unsigned int)nb, base, tan);
		count = count + (12 - ft_nblen(nb, base));
	}
	else
	{
		putnbr_base(nb, base, tan);
		count += ft_nblen(nb, base);
	}
	return (count);
}
