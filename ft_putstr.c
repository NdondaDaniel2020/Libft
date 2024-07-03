/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmatondo <nmatondo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/20 11:39:59 by nmatondo          #+#    #+#             */
/*   Updated: 2024/07/03 13:17:35 by nmatondo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_putstr(char *s, int count)
{
	if (s == NULL)
	{
		ft_putstr_fd("(null)", 1);
		count += 6;
	}
	else
	{
		count += ft_strlen(s);
		while (*s)
		{
			ft_putchar_fd(*s, 1);
			++s;
		}
	}
	return (count);
}
