/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmatondo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/16 14:04:54 by nmatondo          #+#    #+#             */
/*   Updated: 2024/05/16 14:04:57 by nmatondo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;
	size_t	total;

	total = count * size;
	if (size && count > 2147483647 / size)
		return (0);
	ptr = (unsigned char *)malloc(total);
	if (!ptr)
		return (0);
	ft_memset(ptr, 0, total);
	return (ptr);
}
