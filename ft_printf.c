/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmatondo <nmatondo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/23 12:06:41 by nmatondo          #+#    #+#             */
/*   Updated: 2024/07/03 13:17:09 by nmatondo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_print_pars(const char c, va_list args, int count)
{
	if (c == 'd' || c == 'i')
		count = ft_putnbr_base(va_arg(args, int), 10, 0, count);
	else if (c == 'c')
		count = ft_putchar(va_arg(args, int), count);
	else if (c == '%')
		count = ft_putchar('%', count);
	else if (c == 's')
		count = ft_putstr(va_arg(args, char *), count);
	else if (c == 'x')
		count = ft_putnbr_base(va_arg(args, unsigned int), 16, 0, count);
	else if (c == 'X')
		count = ft_putnbr_base(va_arg(args, unsigned int), 16, 1, count);
	else if (c == 'p')
		count = ft_put_end_mem(va_arg(args, unsigned long long), count);
	else if (c == 'u')
		count = ft_put_unsigned(va_arg(args, unsigned int), count);
	return (count);
}

static int	ft_print_args(const char *str, va_list args)
{
	int	i;

	i = 0;
	while (*str != '\0')
	{
		if (*str == '%')
		{
			++str;
			i = ft_print_pars(*str, args, i);
			++str;
		}
		else
		{
			ft_putchar_fd(*str, 1);
			i++;
			++str;
		}
	}
	return (i);
}

int	ft_printf(const char *format, ...)
{
	int			len;
	va_list		args;
	const char	*str;

	if (!*format || !format)
		return (0);
	len = 0;
	str = format;
	va_start(args, format);
	len = ft_print_args(str, args);
	va_end(args);
	return (len);
}
