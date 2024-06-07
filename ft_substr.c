/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmatondo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/16 15:46:48 by nmatondo          #+#    #+#             */
/*   Updated: 2024/05/16 15:46:50 by nmatondo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*new_sub;
	size_t	l;

	l = ft_strlen(s);
	if (start > l)
		return (ft_strdup(""));
	if (l >= len)
		l = len;
	if (ft_strlen(s) - start < l)
		l = ft_strlen(&s[start]);
	new_sub = (char *)ft_calloc(l + 1, sizeof(char));
	if (new_sub)
		ft_strlcpy(new_sub, &s[start], l + 1);
	return (new_sub);
}
