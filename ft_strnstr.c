/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmatondo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/16 09:26:45 by nmatondo          #+#    #+#             */
/*   Updated: 2024/05/16 09:26:46 by nmatondo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	c;
	size_t	l_lit;

	i = 0;
	l_lit = ft_strlen(little);
	if (len == 0 && !little)
		return (0);
	if (big == little || l_lit == 0)
		return ((char *)(big));
	while (*big && i < len)
	{
		c = 0;
		if (*big == little[0])
		{
			while (little[c] == big[c] && little[c] && big[c] && i + c < len)
				c++;
		}
		if (c == l_lit)
			return ((char *)(big));
		++big;
		i++;
	}
	return (0);
}
