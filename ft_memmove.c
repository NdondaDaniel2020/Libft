/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmatondo <nmatondo@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/15 08:28:46 by nmatondo          #+#    #+#             */
/*   Updated: 2024/05/24 13:03:11 by nmatondo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*de;
	unsigned char	*sr;

	de = (unsigned char *)dest;
	sr = (unsigned char *)src;
	if (!dest && !src)
		return (dest);
	if (src < dest)
	{
		while (n--)
			de[n] = sr[n];
	}
	else
	{
		while (n--)
			*de++ = *sr++;
	}
	return (dest);
}
