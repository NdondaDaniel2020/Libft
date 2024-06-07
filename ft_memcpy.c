/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmatondo <nmatondo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 15:26:49 by nmatondo          #+#    #+#             */
/*   Updated: 2024/05/15 12:08:46 by nmatondo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*sr;
	unsigned char	*de;

	sr = (unsigned char *)src;
	de = (unsigned char *)dest;
	if (!src && !dest)
		return (dest);
	while (n--)
		de[n] = sr[n];
	return (dest);
}
